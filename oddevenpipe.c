#include<stdio.h>
#include<unistd.h>
int main(){
	int pipefds[2];
	int x;
	int writemessage;
	int readmessage;
	x = pipe(pipefds);
	if(x==-1){
		printf("pipe failed");
		return 1;
	}
	int f = fork();
	if (f==0)
	{
		read(pipefds[0],&readmessage,sizeof(pipefds[0]));
		if (readmessage%2==0)
		{
			printf("even");
		}else{
			printf("odd");
		}
		
	}else if(f!=0){
		printf("enter number");
		scanf("%d",&writemessage);
		write(pipefds[1],&writemessage,sizeof(writemessage));


	}
	return 0;
	}