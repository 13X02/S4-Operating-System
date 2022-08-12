#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#define SIZE 5
sem_t empty,full,mutex;
int pr=0,cr=0,in=0,out=0;
int buffer[SIZE];
void* Pr_Item(void*);
void* Cr_Item(void*);
void main()
{
	srand(time(NULL));
	printf("\n Enter the number of producers : ");
	scanf("%d",&pr);
	printf("\n Enter the number of consumers : ");
	scanf("%d",&cr);
	int arr[pr],var[cr];
    pthread_t P[pr],C[cr];
	sem_init(&empty,0,SIZE);
	sem_init(&full,0,0);
	sem_init(&mutex,0,1);
	for(int i=1;i<=pr;i++)
	{
		arr[i]=i;
		pthread_create(&P[i],NULL,(void*)Pr_Item,(void*)&arr[i]);
	}
	for(int i=1;i<=cr;i++)
	{
		var[i]=i;
		pthread_create(&C[i],NULL,(void*)Cr_Item,(void*)&var[i]);
	}
	for(int i=1;i<=pr;i++)
		pthread_join(P[i],NULL);
	
	for(int i=1;i<=cr;i++)
		pthread_join(C[i],NULL);
}
void *Pr_Item(void *n)
{
	while(1)
	{
	int pno=(int)n;
	int item;
	item=rand() % 1000;
	sem_wait(&empty);
        sem_wait(&mutex);
	buffer[in]=item;
	printf("\nProducer %d produced item : %d ",pno,item);
	sleep(1);
	in=(in+1)%SIZE;
        sem_post(&mutex);
	sem_post(&full);
        }
}
void *Cr_Item(void *m)
{
	while(1)
	{
	int cno=(int)m;
	int item;
	sem_wait(&full);
	sem_wait(&mutex);
	item=buffer[out];
	printf("\nConsumer %d consumed item : %d ",cno,item);
	sleep(1);
	out=(out+1)%SIZE;
	sem_post(&mutex);
	sem_post(&empty);
	}
}