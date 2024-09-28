#include<stdio.h>
int f1(int,int);
int f1(int n,int m)
{
    if(n>m)
    {
        if(n%m==0)
        return m;
        else
       return f1(n%m,m);
    }
    else{
        if(m>n)
        {
            if(m%n==0)
            return n;
            else
            return f1(n,m%n);
             }
    }
    }
int main()
{
    int x,y,p;
    printf("Enter the values of two numbers : ");
    scanf("%d%d",&x,&y);
    p=f1(x,y);
    printf(" HCF is : %d",p);
}
