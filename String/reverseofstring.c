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
    printf("The reverese of string is : ");
   for(i=l;i>=0;i--)
   {
    printf("%c",str[i]);
   }
     
} 

