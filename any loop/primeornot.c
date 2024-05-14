#include<stdio.h>
int main()
{
    int i=2,n,k=0;
    printf("Enter the value ");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        k++;
    
    }
    for(i=2;i<=n/2;i++)
    {
if(n%i==0){
k++;
    }
    }
    if(k!=0)
     printf("not prime");
     else
      printf("prime");
    
}