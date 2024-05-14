#include<stdio.h>
int main()
{
    int i=1,n,k=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n/(10*k)!=0)
    {
    i++;
    k=k*10;
}
printf("The digits are %d",i);
}
