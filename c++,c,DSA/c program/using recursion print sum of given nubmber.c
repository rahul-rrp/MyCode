#include<stdio.h>
int f1(int n);
int main()
{
	int K;
	K=f1(3);
	printf("%d",K);
	
}
int f1(int n)
{
	int S;
	if(n==1)
	return 1;
	S=n+f1(n-1);
	return S;
}
