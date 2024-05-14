#include<stdio.h>
int main()
{
    int r,a,y=0,b=0;
    printf("Enter the number  ");
    scanf("%d",&a);
    while(a/10>=1){
    r=a%10;
    a=a/10;
    y=y*10+r;
    }
b=y*10+a;
printf("The reverse number is %d ",b);
}