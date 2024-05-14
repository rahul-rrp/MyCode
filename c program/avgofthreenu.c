#include<stdio.h>
int main()
{
    float a,b,c,avg=0,sum=0;
    printf("ENTER THE VALUE OF A B C ");
    scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
avg=sum/3.0;
printf("\n avarage of three number is %f",avg);
}