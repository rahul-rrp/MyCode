#include<stdio.h>
float lcm(int r);
int main()
{
    float k,p;
    printf("enter the radius ");
    scanf("%f",&p);
    k=area_circle(p);
    printf(" THE AREA OF CIRCLE IS :%f",k);
    return 0;
}
float area_circle(int a)
{
    return 3.14*a*a;
}