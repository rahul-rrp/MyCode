#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
    char str[20],ch[20];
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.\n",i);
    int l;
    l=i;
    fflush(stdin);
    for(i=0;str[i];i++)
    {
        ch[i]=str[i];
    }
    ch[i]='\0';
     printf("The copy string is : %s",ch);
} 

