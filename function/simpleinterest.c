#include<stdio.h>
float si(int,int,int);
int main()
{
    float k,p,t,r;
    printf("enter the principle amount  ");
scanf("%f",&p);
 printf("enter the time duriation\n ");
 scanf("%f",&t);
  printf("enter the rate of intrest\n  ");
    scanf("%f",&r);
    k=si(p,t,r);
    printf(" THE SIMPLE INTEREST IS :\n%f",k);
    return 0;
}
float si(int a,int b,int c)
{
    return (a*b*c)/100;
}