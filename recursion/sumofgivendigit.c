#include<stdio.h>
int f1(int);
int f1(int n)
{
    int k;
    if(n>0)
    {
     k=n%10;
        return k+f1(n/10);
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
