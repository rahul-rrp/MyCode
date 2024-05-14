#include<stdio.h>
int main()
{
    int a,b,i=2,f=0,l;
    printf("Enter the two number ");
    scanf("%d%d",&a,&b);

for( l=a>b?a:b;l<=a*b;l++)
{
    if(l%a==0&&l%b==0){
    printf("THE LCM IS %d",l);
    break;
}}
     
}