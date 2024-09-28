#include<stdio.h>
int main()
{
    int a[10],i,y,r;
    printf("Enter the numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(r=0;r<=9;r++)
    {
     for(i=0;i<=8-r;i++)
     { 
        if(a[i]>a[i+1])
        {
          y=a[i];
          a[i]=a[i+1];
          a[i+1]=y;
        }
     }}
     printf("Sorting is :");
     for(i=0;i<=9;i++)
     {
      printf("%d ",a[i]);
     }
    
}