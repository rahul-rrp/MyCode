#include<stdio.h>
int f1(int);
int f1(int n)
{
    if(n>0)
    {
        if(n%2==0)
        {
            f1(n-1);
        }
        else
        return n+f1(n-2);
}}
int main()
{ 
    int s,b;
    printf("Enter number : ");
    scanf("%d",&b);
    s=f1(b);
    printf("Sum of Odd numbers is :%d ",s+1);
    
}