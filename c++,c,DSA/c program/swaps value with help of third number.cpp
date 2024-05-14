#include<stdio.h>
int main()
{
// swaps values of two number with the help of third number
float a,b,c;
printf("Enter the first number");
scanf("%f",&a);
printf("Enter the second number");
scanf("%f",&b);
c=a;
a=b;
b=c;
printf("%f\n",a);
printf("%f\n",b);

}
