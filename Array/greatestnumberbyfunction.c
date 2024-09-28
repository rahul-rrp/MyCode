#include<stdio.h>
int input();
int main()
{
    int a[1],s,k=0;
    printf("Enter size of array : ");
    scanf("%d",&k);
    s=input(a,k);
    printf("Maximum is : %d",s);
}
int input(int b[],int n)
{
    int i,max;
    printf("Enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=1;i<n;i++)
    {
    if(max<b[i])
    {
     max=b[i];
    }
}
    return max;
}