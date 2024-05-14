#include<stdio.h>
int main()
{
    int a,r,r1,r2,sum;
    printf("ENTER THE VALUE ");
    scanf("%d",&a);
    r=(a/100)*100+(a%10)*10;
    r1=a/10;
    r2=r1%10;
    sum=r+r2;
    printf("%d",sum);
}