#include<stdio.h>
int main(){
    int n,m,hit,miss=0;
    printf("enter no of page reference");
    scanf("%d",&n);
    int pr[n];
    printf("Enter page references");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&pr[i]);
    }
    int front=-1;
    int rear=-1;
    printf("Enter no page frame");
    scanf("%d",&m);
    int pf[m];
    for (int i = 0; i < m; i++)
    {
        pf[i]=-1;
    }
    for (int i = 0; i < n; i++)
    {
        hit=0;
        for (int j = 0; j < m; j++)
        {
            if (pr[i]==pf[j])
            {
                hit=1;
                break;
            }
            
        }
        if (hit==0)
        {
            if (front==(rear+1)%m)
            {
                pf[front]=pr[i];
                rear=front;
                front=(front+1)%m;
            }else{
		        if(front==-1){
			        front = rear =0;
		        }
		        else{
			        rear = (rear + 1) % m;
                }pf[rear]=pr[i];
	        }
            miss++;
        }
    }
    printf("No of page fault %d",miss);
    return 0;
    
    
}