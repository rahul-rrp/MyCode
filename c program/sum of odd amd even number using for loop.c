#include<stdio.h>
int main()
{
	int i,n,even_no,odd_no;
	printf("ENTER THE VALUE OF N :");
	scanf("%d",&n);
	even_no=0;
	odd_no=0;
	for (i=0;i<=n;i++)
	{
		if (i%2==0)
		even_no=even_no+i;
		else
		odd_no=odd_no+i;
	}
	printf("SUM OF EVEN NUBER IS :");
	printf("%d\n",even_no);
	printf("SUM OF ODD NUMBER IS :");
	printf("%d\n",odd_no);
}
