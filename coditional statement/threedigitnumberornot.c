#include<stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER  ");
    scanf("%d",&a);
    if(a/100>=1&&a/100<=9)
    printf("three digit number");
    else
    printf("not three digit");
}