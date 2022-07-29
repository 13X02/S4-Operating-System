#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
struct dirent *dptr;
int main(){
    char buff[100];
    DIR *dirp;
    printf("Enter Directory");
    scanf("%s",buff);
    dirp=opendir(buff);
    if(dirp==NULL){
        printf("does not exit");
        exit(0);
    }
    while (dptr=readdir(dirp))
    {
        printf("%s\n",dptr->d_name);
    }
    closedir(dirp);
    
}