#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
    char str[20],ch;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.\n",i);
    int l;
    l=i;
    fflush(stdin);
    printf("The upper case of given strin is : ");
    for(i=0;i<l-1;i++)
    {
        if(str[i]==32)
        {
            j=str[i];
            printf("%c",j);
        }
        else
        {
      j=str[i]+32;
      printf("%c",j);
    }}
    
     
} 

