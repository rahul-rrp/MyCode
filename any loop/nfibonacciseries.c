#include<stdio.h>
int main()
{
    int n,i=0,y=-1,x=1,z=0;
    printf("Enter the term ");
    scanf("%d",&n);
    printf("The fibonacci series is ");
    while(i<=n)
    {
z=y+x;
y=x;
x=z;
i++;
printf(" \n%d ",z);
    }
}