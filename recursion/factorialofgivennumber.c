#include<stdio.h>
int f1(int);
int f1(int n)
{
    int k;
    if(n>1)
    {
     
        return n*f1(n-1);
    }
}
int main()
{
    int p,s;
    printf("Enter the number : " );
    scanf("%d",&p);
    s=f1(p);
    printf("Sum of given digit is :: %d",s);
}
