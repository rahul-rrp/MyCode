#include<stdio.h>
int main()
{
    int a[10],k=0,i,j=1,max;
    printf("Enter the numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    } 
     max=a[0];
     for(i=1;i<=9;i++)
     {
        if(max<a[i])
        max=a[i];
     }
     printf("Maximum is : %d",max);
}