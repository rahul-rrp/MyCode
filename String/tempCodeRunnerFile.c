#include<stdio.h>
#include<string.h>
int f1();
int main()
{
    char str[50];
    printf("Enter the string ");
    fgets(str,50,stdin);
    f1(str);
}