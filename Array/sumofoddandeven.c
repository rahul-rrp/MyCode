#include<stdio.h>
int main()
{
    int a[10],even=0,odd=0;
    printf("Enter the numbers ");
    int i,j,sum=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
     if(a[i]%2==0)
     {
        even=even+a[i];
     }
     else 
     odd=odd+a[i];
     }
     printf("Sum of even numbers are %d\n",even);
     printf("Sum of odd numbers are %d",odd);
}