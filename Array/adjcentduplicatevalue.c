#include<stdio.h>
int input();
int main()
{
int a[1],k,s;
printf("Enter the size of array : ");
scanf("%d",&k);
s=input(a,k);
printf("\nAdjcent value is :%d ",s);
}
int input(int b[],int n)
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
    for(i=0;i<n;i++)
    {
    if(b[i+1]==b[i])
    {
        return b[i];
    }}
} 