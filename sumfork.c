#include<stdio.h>
#include<unistd.h>
int main(){
	int n,f,sum=0;
	printf("Enter number of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter numbers");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	f=fork();
	if(f!=0){
		printf("Parent Process\n");
		for(int i=0;i<n;i++){
			printf("%d \t",a[i]);
		}
	}else{
		printf("\nChild process");
		for(int i=0;i<n;i++){
			sum+=a[i];
		}
		printf("\nSum is %d",sum);
	}
	return 0;
}
	
