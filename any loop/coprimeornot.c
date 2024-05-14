#include<stdio.h>
int main()
{
    int a,b,h;
    printf("Enter the numbers  ");
    scanf("%d %d",&a,&b);
    h=a<b?a:b;
    int i=h;
        while(a>1&&b>1)
    {
        if(a%i==0&&b%i==0)
        {
        break;
        }
    i--;
    }
    if(i==1)
    printf("co-prime");
    else
    printf("not co-prime");
}