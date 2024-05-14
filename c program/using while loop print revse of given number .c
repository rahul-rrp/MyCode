#include<stdio.h>
int main()
{
	int i,n,remainder,reverse=0;
	printf("ENTER THE VALUE OF N :");
	scanf("%d",&n);
	while (n!=0)
	{
	remainder=n%10;
	reverse=reverse*10+remainder;
	n=n/10;
	}
	printf("THE OF NUMBER IS : %d",reverse);
}
