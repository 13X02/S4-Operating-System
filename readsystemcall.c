#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(){
    char c;
    int fd = open("sample.txt",O_RDONLY,0);
    read(fd,&c,1);
    printf("c=%d",c);
    exit(0);

}