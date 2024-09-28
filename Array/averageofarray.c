#include<stdio.h>
int main()
{
    int a[10];
    float avg;
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
    avg=sum/10.0;
    printf("Average of array is : %f",avg);
}