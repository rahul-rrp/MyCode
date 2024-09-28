#include<stdio.h>
int En(int);
int En(int n)
{
    if(n>0)
    {
    if(n%2==0)
    {
         printf("%d ",n); 
          En(n-2);
          
         }
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    En(b);   
}