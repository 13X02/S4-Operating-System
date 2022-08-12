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
    int pf[m],p[m];
    for (int i = 0; i < m; i++)
    {
        pf[i]=-1;
        p[i]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        hit=0;
        for (int j = 0; j < m; j++)
        {
            if (pr[i]==pf[j])
            {
                hit=1;
                p[j]++;
            }else{
                p[j]--;
            }
            
        }
        if (hit==0)
        {
            int small=p[0];
            int loc=0;
            for (int i = 1; i < m; i++)
            {
                if (small>p[i])
                {
                    small=p[i];
                    loc=i;
                } 
            }
            pf[loc]=pr[i];
            p[loc]=n;
            
            miss++;
        }
    }
    printf("No of page fault %d",miss);
    return 0;
    
    
}