#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main(){
	int pipefds[2];
	int x;
	char writemessage[30];
	char readmessage[30];
	x = pipe(pipefds);
	if(x==-1){
		printf("pipe failed");
		return 1;
	}
	int f = fork();
	if (f==0)
	{
		int j=0;
		read(pipefds[0],readmessage,sizeof(pipefds[0]));
        char rev[strlen(readmessage)];
        int l=strlen(readmessage)-1;
		for(int i=l;i>=0;i--){
			rev[j]=readmessage[i];
			j++;
            if(i==0){
                rev[j]='\0';
            }
        }
		if (strcmp(rev,readmessage)==0)
		{
			printf("\npalindrome");
		}else{
			printf("\nnot palindrome");
		}
		

	}else if(f!=0){
		printf("enter string");
        scanf("%s",writemessage);
    	write(pipefds[1],writemessage,strlen(writemessage));


	}
	
	
	
	return 0;
	}