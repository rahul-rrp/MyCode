#include<stdio.h>
void calculatevalue(float value);
int main()
{
	float value=100;
	calculatevalue(value);
}
void calculatevalue(float value)
{
	value=value+(value*0.18);
	printf("%f",value);
}
