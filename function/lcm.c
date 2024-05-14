#include<stdio.h>
int lcm(int,int);
int main()
{
    int k,p,q;
    printf("enter the two numbers  ");
    scanf("%d",&p);
    scanf("%d",&q);
    k=lcm(p,q);
    printf(" THE LCM OF TWO NUMBER IS :%d",k);
    return 0;
}
int lcm(int a,int b)
{
    int l;
    for(l=a>b?a:b;l<=a*b;l++)
    {
if(l%a==0&&l%b==0)\
{
     return l;
     break;
}}}