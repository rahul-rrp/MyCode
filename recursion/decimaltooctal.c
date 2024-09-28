#include<stdio.h>
int En(int);
int En(int n)
{
int r; 
    if(n>0)
    {
      En(n/8);
      r=n%8;
  printf("%d ",r);
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    printf("Decimal:%d to octal conversion is :",b);
    En(b); 
}