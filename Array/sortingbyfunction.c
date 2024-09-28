#include<stdio.h>
void input();
int main()
{
    int a[1],s,k=0;
    printf("Enter size of array : ");
    scanf("%d",&k);
    input(a,k);
}
void input(int b[],int n)
{
    int i,l,j;
    printf("Enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++)
    {
    for(i=0;i<n-j-1;i++)
    {
        if(b[i]>b[i+1])
        {
            l=b[i];
            b[i]=b[i+1];
            b[i+1]=l;
        }
    }}
    printf("Sorting numbers are ");
    for(i=0;i<n;i++)
    {
    printf("%d ",b[i]);
}}