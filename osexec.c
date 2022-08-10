#include<stdio.h>
#include<unistd.h>
void main(){
    printf(" 1\n");
    int pid=fork();
    if(pid==0){
        execl("/bin/ls","ls",NULL);
    }else if(pid>0){
        execl("/bin/pwd","pwd",NULL);
    }
    
}