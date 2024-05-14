#include<stdio.h>
int main()
{
float radius,area,circumcenter,v;
	printf("Program:Area  circumcenter of Circle\n");
	printf("Radius of circule   ");
	scanf("%f",&radius );
	area=(22/7)*radius*radius;
	circumcenter=2*(22/7)*radius;
	printf("Result\n");
	printf("Area: %f\n",area);
	v=22/7;
	printf("Circumcenter: %f\n ,%f",circumcenter,v);
	}

