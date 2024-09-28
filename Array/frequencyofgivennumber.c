#include<stdio.h>
void input();
int main()
{
int a[1],k,s;
printf("Enter the size of array : ");
scanf("%d",&k);
input(a,k);
}
void input(int b[],int n)
{
    int i,d,m,temp,k=1;
    printf("Enter %d number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Given array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    for(d=0;d<n;d++)
    {
    for(i=0;i<n-d-1;i++)
    {
        if(b[i]>=b[i+1])
        {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
        }
    }}
    printf("\nSorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    temp=b[0];
    i=1;
    while(i<=n)
    {
    if(temp==b[i])
    {
    while(temp==b[i])
    {
     k++;
     temp=b[i];
     i++;
    }
    printf("\nThe frequency of %d is %d ",temp,k);
    k=1;
    temp=b[i];
     i++;
    }
    else
    {
    printf("\nThe frequency of %d is %d ",temp,k);
    temp=b[i];
     i++;
    k=1;
    }}
}
