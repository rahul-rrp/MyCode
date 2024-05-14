#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of N  :");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
		if (i%2==0)
		{
			printf("NUMBER IS EVEN ::: %d\n",i);
		}
		else {
			printf("NUMBER IS ODD:::  %d\n",i);
		}
	}
	}
