#include<stdio.h>
void input();
int main()
{
int a[1],k;
printf("Enter the size of array : ");
scanf("%d",&k);
input(a,k);
}
void input(int b[],int n)
{
    int i,d,m,temp,count=1;
    printf("Enter %d number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Given array is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }