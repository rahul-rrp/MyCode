#include<stdio.h>
int main()
{
    int a[10],k=0,i,j=1;
    printf("Enter the numbers in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
     i=0;
     while(j<9)
     {
     if(a[i]<a[j])
     {
      k=a[i];
      j++;
     }
     else
     {
     if(a[j]<a[i])
     {
        k=a[j];
        i=j;
        j++;
     }}}
     printf("\nSmallest number is : %d",k);
     
}