#include<stdio.h>
int f1(int);
int f1(int n)
{
    int sum=0,a;
    if(n>0)
    {
        return (n*n)+f1(n-1);
       
}}
int main()
{ 
    int s,b,k=0;
    printf("Enter number : ");
    scanf("%d",&b);
    s=f1(b);
    printf(" SUM OF SQUARE IS :%d ",s);
}