#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter the value : ");
	scanf("%d",&n);
	sum=0;
	for (i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	{
		printf("%d",sum);
	}
}

