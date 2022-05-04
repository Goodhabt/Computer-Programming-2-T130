#include <stdio.h>
#include <stdlib.h>
int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
    
    fptr = fopen("program.txt","a");
    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Input how many lines to be appended : ");
    scanf("%d", &n);
    for(i = 0; i < n+1;i++)
    {
    fgets(str,sizeof str,stdin);
    fputs(str, fptr);
    }
    fclose(fptr);
    
  return 0;
}