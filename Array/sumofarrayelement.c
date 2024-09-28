#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter the numbers ");
    int i,j,sum=0;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
     sum=sum+a[i];
    } 
    printf("Sum of array is : %d",sum);
}