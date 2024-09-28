#include<stdio.h>
int En(int);
int En(int n)
{
int r,y=0; 
    if(n>0)
    {
         printf("%d",n%10);
      En(n/10);
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    printf("Reverse of %d number is: ",b);
    En(b); 
}