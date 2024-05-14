#include<stdio.h>
int sum(int n);
int main()
{
printf("%d",sum(2));	
}
int sum(int n)
{
	if(n==1)
	return 1;
	return (n+sum(n-1));
}
