#include<stdio.h>
int main(){
    int n,s,diff,tst=0;
    printf("Enter size of memory");
    scanf("%d",&s);
    printf("enter the no of request");
    scanf("%d",&n);
    int req[n+1];
    printf("Enter the current head position");
    scanf("%d",&req[0]);
    printf("Enter the requests");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&req[i]);
    }
    int small = req[1];
    int large = req[1];
    for (int i = 2; i <= n; i++)
    {
        if (small>req[i])
        {
            small=req[i];
        }
        if (large<req[i])
        {
            large = req[i];
        }
        
        
    }
    tst=(large - req[0])+(large - small);
    printf("Total seek time is %d",tst);
    return 0;
    
}