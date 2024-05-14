#include<stdio.h>
int main()
{
    int n,i=0,y=-1,x=1,z=0,k;
    printf("Enter the term ");
    scanf("%d",&n);
    printf("Enter the number ");
    scanf("%d",&k);

    while(i<=n)
    {
z=y+x;
if(k==z)
{
    printf("Given nunber is in the series ");
    break;
}
if(k<z)
{
    printf("Not in series ");
    break;
}
y=x;
x=z;
i++;
    }
}