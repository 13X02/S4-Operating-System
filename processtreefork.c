#include<stdio.h>
#include<unistd.h>
int main(){
	int a = fork();
	if(a==0){
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
		int b=fork();
		if(b==0){
			printf("Process id :%d\n",getpid());
			printf("Parent id :%d\n",getppid());
			int c=fork();
			if(c==0){
				printf("Process id :%d\n",getpid());
				printf("Parent id :%d\n",getppid());
			}else{
				printf("Process id :%d\n",getpid());
				printf("Parent id :%d\n",getppid());
			}
		}else{
			printf("Process id :%d\n",getpid());
			printf("Parent id :%d\n",getppid());
		}
	}else{
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
	}
	return 0;
}
