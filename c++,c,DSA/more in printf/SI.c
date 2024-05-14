#include<stdio.h>
int main()
{
    float p,i,t,SI,k;
    printf("ENTER THE VALUE OF PRINCIPLE,INTEREST AND TIME");
    scanf("%f %f %f",&p,&i,&t);
    k=p*i*t;
    SI=k/100.0;
    printf("%f",SI);
}