#include <stdio.h>
#include <dirent.h>
int main(void)
{
    struct dirent *de; 
    char f[30];
    printf("Enter directory");
    scanf("%s",f); 
    DIR *dr = opendir(f);
  
    if (dr == NULL)  
    {
        printf("Could not open current directory" );
        return 0;
    }
  
    while ((de = readdir(dr)) != NULL)
            printf("%s\n", de->d_name);
  
    closedir(dr);    
    return 0;
}