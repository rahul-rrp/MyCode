#include<stdio.h>
int main()
{
    int a,b;
printf("ENTER THE TWO NUMBER ");
scanf("%d %d",&a,&b);
if(a>b){
printf("THE GREATER NUMBER IS %d",a);
}
if(b>a){
printf("THE GREATER NUMBER IS %d",b);
}
if(a==b)
{
printf(" BOTH EQUAL NUMBER  THAT IS %d",a);
}
}