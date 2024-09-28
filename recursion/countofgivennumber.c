#include<stdio.h>
int f1(int);
int f1(int n)
{
    int k=0,s;
    while(n>0)
    {
     s=n%10;
     n=n/10;
     k++;
    }
     printf("The Number of digit is %d ",k);
}
int main()
{
    int k;
    printf("Enter the Number : ");
    scanf("%d",&k);
    f1(k);
}