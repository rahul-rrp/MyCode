#include<stdio.h>
int On(int);
int On(int n)
{
    if(n>0)
    {
    if(n%2==0)
    {
        On(n-1);
        if(n%2!=0)
          printf("%d ",n);
         }
         else
         {
        On(n-2);
        printf("%d ",n);
         }
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    On(b);
    
}