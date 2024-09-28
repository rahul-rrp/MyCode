#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[20];
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.",i);
} 