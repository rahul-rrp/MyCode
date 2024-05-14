#include<stdio.h>
int fac(int n);
int main()
{
	printf("YOUR IS FACTORIAL IS:%d",fac(5));
}
int fac(int n)
{
	if(n==0)
	return 1;
	return (n*fac(n-1));
}
