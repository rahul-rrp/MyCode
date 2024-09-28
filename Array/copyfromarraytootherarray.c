#include<stdio.h>
int main()
{
    int a[10],k[10],i,j,l=0;
    printf("Enter the numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("First array element are : ");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<=9;i++)
    {
        k[l]=a[i];
        l++;
    }
    printf("\nSecond array elements are :");
    for(l=0;l<=9;l++)
    {
        printf("%d ",k[l]);
    }
}