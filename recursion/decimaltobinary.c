#include<stdio.h>
int En(int);
int En(int n)
{
int r; 
    if(n>0)
    {
      En(n/2);
      r=n%2;
  printf("%d ",r);
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    printf("Decimal:%d to binary conversion is :",b);
    En(b); 
}