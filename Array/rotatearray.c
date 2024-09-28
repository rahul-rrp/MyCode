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
    printf("\n'1 for right rotate and -1 for left rotate' :");
    scanf("%d",&d);
    printf("How many position: ");
    scanf("%d",&m);
    if(d==1)
    {
        while(m>=count)
        {
            temp=b[n-1];
    for(i=n-2;i>=0;i--)
    {
        b[i+1]=b[i];
    }
    b[0]=temp;
    count++;
    } }
    else
    {
     while(m>=count)
        {
            temp=b[0];
    for(i=0;i<=n-1;i++)
    {
        b[i]=b[i+1];
    }
    b[n-1]=temp;
    count++;
        }}
    printf("Rotated array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}