#include<stdio.h>
int main(){
    int m,n;
    printf("Enter no of memory block");
    scanf("%d",&m);
    int mb[m];
    printf("Enter size of memory blocks");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&mb[i]);
    }
    printf("Enter no of processes");
    scanf("%d",&n);
    int p[n];
    printf("Enter size of memory blocks");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (p[i]<=mb[j])
            {

                printf("\nprocess %d allocated to  block %d \nwastage:%d",i,j,mb[j]-p[i]);
                mb[j]=0;
                flag=1;
                break;
            }
            
        }
        if (flag==0)
        {
            printf("\nprocess %d can't be allocated",i);
            
        }else{
            flag=0;
        }
        
        
    }
    return 0;
    
}