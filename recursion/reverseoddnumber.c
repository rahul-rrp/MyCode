#include<stdio.h>
int On(int);
int On(int n)
{
    if(n>0)
    {
    if(n%2==0)
    {
        
        if(n%2!=0)
          printf("%d ",n);
          On(n-1);
         }
         else
         {
           printf("%d ",n);
        On(n-2);
         }
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    On(b);
    
}