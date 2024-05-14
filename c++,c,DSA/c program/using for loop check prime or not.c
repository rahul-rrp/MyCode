#include<stdio.h>
int main()
{
	int i,n,k=0;
	printf("ENTER THE VALUE OF N: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
	{
		if (n%i==0)
		k++;
		}
	}
	if (k==2)
              	printf("NUMBER IS PRIME ");
		else
		printf("NUMBER IS NOT PRIME ");
	}

