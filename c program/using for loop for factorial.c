#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter the value : ");
	scanf("%d",&n);
	sum=1;
	for (i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	{
		printf("%d",sum);
	}
}

