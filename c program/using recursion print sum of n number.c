// sum of n natural number using recursive funtion
#include<stdio.h>
int sum(int n);
int main() {
printf("%d",sum(5));
	return 0;


}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	int sumk=sum(n-1);
	int sumN=sumk+n;
	return sumN;
}
