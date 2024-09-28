#include<stdio.h>
int main()
{
    int a[5],k=0,i,j=1;
    printf("Enter the numbers in array : ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
     i=0;
     while(j<5)
     {
     if(a[i]>a[j])
     {
      k=a[i];
      j++;
     }
     else
     {
     if(a[j]>a[i])
     {
        k=a[j];
        i=j;
        j++;
     }}}
     printf("\nGreatest number is : %d",k);
     
}