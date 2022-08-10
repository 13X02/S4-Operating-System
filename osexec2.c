#include<stdio.h>
#include<unistd.h>
int main(){
    int pid=fork();
    if(pid==0){
        execl("/Users/home/repos/S4-Operating-System/hi","./hi",NULL);
    }else if(pid>0){
        execl("/Users/home/repos/S4-Operating-System/hello","./hello",NULL);
    }
    return 0;
}