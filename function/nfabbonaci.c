#include<stdio.h>
int nfabbonaci(int);
int main()
{
    int k,p,q;
    printf("enter the number  ");
    scanf("%d",&p);
     nfabbonaci(p);
    return 0;
}
int nfabbonaci(int a)
{
    int i=0,x=1,y=-1,z=0;
    printf("The fabbonaci series are :");
while(i<=a)
    {
z=y+x;
y=x;
x=z;
i++;
printf(" \n%d ",z);
    }
}