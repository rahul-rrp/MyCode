#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value ");
    scanf("%d",&n);
    if(n==1||n==0)
    printf("Not prime ");
     for(i=2;i<=n-1;i++)
    {
if(n%i==0)
{
     printf("not prime");
break;
    }}
    if(n==i)
      printf("prime");
    
}