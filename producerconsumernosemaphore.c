#include<stdio.h>
#include<stdlib.h>
int mutex=1,empty,full=0,x=0;
int signal(int n){
    return ++n;
}
int wait(int n){
    return --n;
}
void producer();
void consumer();
int main(){
    int n,c,f=1;
    printf("Enter Buffer size");
    scanf("%d",&n);
    empty=n;
    while (f)
    {
        printf("\n1.Producer 2.Consumer");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        if(mutex==1&&empty!=0){
            producer();
        }else{
            printf("Buffer full");
        }
        break;
    case 2:if (mutex==1&&full!=0){
        consumer();
        }else{
        printf("Buffer Empty");
        }
        break;
    case 3:f=0;
    
    
    default:
        break;
    }
    }
    
    
}
void consumer(){
    mutex=wait(mutex);
    full=wait(full);
    empty=signal(empty);
    printf("Consumed product %d",x);
    x--;
    mutex=signal(mutex);
}
void producer(){
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    x++;
    printf("Produced product %d",x);
    mutex=signal(mutex);
}