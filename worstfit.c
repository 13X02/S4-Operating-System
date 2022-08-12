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
    int diff,loc;
    for (int i = 0; i < n; i++)
    {
        diff=-1;
        loc=0;
        for (int j = 0; j < m; j++)
        {
            if (diff<(mb[j]-p[i]))
            {
                diff=mb[j]-p[i];
                loc=j;
            }
            if(j==m-1){
                if (diff>-1)
                {
                    printf("\nprocess %d allocated to  block %d \nwastage:%d",i,loc,diff);
                    mb[loc]=0;
                }else{
                    printf("\nprocess %d can't be allocated",i);
                }
            }   
        }
    }
    return 0;
    
}