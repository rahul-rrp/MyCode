#include<stdio.h>
int input();
int main()
{
    int a[10],s;
    s=input(a,10);
    printf("minimum is : %d",s);
}
int input(int b[],int n)
{
    int i,min;
    printf("Enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    min=b[0];
    for(i=1;i<n;i++)
    {
    if(min>b[i])
    {
     min=b[i];
    }
}
return min;
}