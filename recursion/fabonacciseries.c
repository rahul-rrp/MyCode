#include<stdio.h>
int f1(int);
int f1(int n)
{
    int a=0,b=1,s,i;
    printf("Fibonacci Series (first %d terms):\n", n);
    for(i=1;i<=n;++i)
    {
        printf("%d ",a);
        s=a+b;
        a=b;
        b=s;
}
}
int main()
{
    int k,s;
    printf("Enter the number : ");
    scanf("%d",&k);
    f1(k);
    
}
