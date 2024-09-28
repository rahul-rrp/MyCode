#include<stdio.h>
int En(int);
int En(int n)
{
    if(n>0)
    {
        return n+En(n-1);
}}
int main()
{ 
    int s,b;
    printf("Enter number : ");
    scanf("%d",&b);
    s=En(b);
    printf("Sum of Natural numbers is :%d ",s);
    
}