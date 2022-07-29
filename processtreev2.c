#include<stdio.h>
#include<unistd.h>
int main(){
	int a = fork();
	int b=fork();
	int c=fork();
	int d=fork();
	if(a==0){
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
	} if(b==0){
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
	}
	 if(c==0){
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
	}
	 if(d==0){
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
	}
	if(a!=0&&b!=0&&c!=0&&d!=0){
		printf("Process id :%d\n",getpid());
		printf("Parent id :%d\n",getppid());
	}
	return 0;
}
