#include<stdio.h>
int SqN(int);
int SqN(int n)
{
    int k;
    if(n>0)
    {
    SqN(n-1);
    k=n*n;
     printf("\n %d*%d=%d ",n,n,k); 
  
}}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    SqN(b);   
}