#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main(){
    char c[30];
    int fd1 = open("test.txt",O_RDONLY,0);
    read(fd1,c,30);
    int fd2 = open("test2.txt",O_WRONLY,0);
    write(fd2,c,30);
    write(1,c,30);
    exit(0);

}