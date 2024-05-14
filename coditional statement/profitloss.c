#include<stdio.h>
int main()
{
float a,b,r;
float p,k;

printf("ENTER COST PRICE AND SELLING PRICE ");
scanf("%f %f",&a,&b);
r=b-a;


if(r>0)
{
printf("YOU ARE IN PROFIT  ");
p=r/a*100.0;
printf("PER. IS :  %f",p);

} 
else
{
k=r/b*100.0;
printf("NO PROFIT, YOU ARE IN LOSS PER. IS %f  ",k);
}

}