#include<stdio.h>
int f1(int);
int f1(int n)
{
    if(n>0)
    {
        if(n%2==0)
        {
          return n+f1(n-2);
        }
        else
         f1(n-1);
}}
int main()
{ 
    int s,b;
    printf("Enter number : ");
    scanf("%d",&b);
    s=f1(b);
    printf("Sum of Even numbers is :%d ",s);
    
}