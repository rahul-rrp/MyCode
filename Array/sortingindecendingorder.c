#include<stdio.h>
int main()
{
    int a[10],k=0,i,j,max,l=0;
    printf("Enter the numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(j=0;j<=9;j++)
    {
     for(i=0;i<=9-j;i++)
     {
        if(a[i]<a[i+1])
        {
            l=a[i+1];
            a[i+1]=a[i];
            a[i]=l;
        }
     }}
     printf("Sorting in decending order :");
     for(k=0;k<=9;k++)
     {
     printf("%d ",a[k]);
}}