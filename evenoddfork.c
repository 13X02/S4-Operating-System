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
			if(a[i]%2!=0){
				sum+=a[i];
			}
		}
		printf("Sum of Odd numbers is %d",sum);
	}else{
		printf("\nChild process");
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				sum+=a[i];
			}
		}
		printf("\nSum of Even numbers is %d",sum);
	}
	return 0;
}
	
