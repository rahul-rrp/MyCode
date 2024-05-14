#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle  ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    printf(" Triangle will exist ");
    else
    printf("Triangle will not exist  ");
}