

#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,s,loc,d,tst=0;
    printf("Enter memory size");
    scanf("%d",&s);
    printf("Enter no of request");
    scanf("%d",&n);
    int req[n+1];
    printf("Enter head position");
    scanf("%d",&req[0]);
    printf("Enter the requests");
    for(int i=1;i<=n;i++){
        scanf("%d",&req[i]);
    }
    for(int k=0;k<n;k++){
        int min =s;
        for(int i=1;i<=n;i++){
            d = abs(req[0]-req[i]);
            if (min>d)
            {
                min = d;
                loc =i;
            }
            
        }
        tst+=min;
        req[0]=req[loc];
        req[loc]=s;
    }
    printf("tst = %d",tst);
    return 0;
}