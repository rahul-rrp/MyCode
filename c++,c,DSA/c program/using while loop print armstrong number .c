#include<stdio.h>
int main()
//ARMSTRONG NUMBER IS SUM 5*5*5 and 3*3*3 and 1*1*1=gives same number tha we entered like 153
{
	int i,r,n,k,sum=0;
	printf("ENTER THE VALUE OF N  : ");
	scanf("%d",&n);
	k=n;
	while (n>0) 
	{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;
	}
	if (k==sum)
		printf("NUMBER IS ARMSTRONG");
		else 
		printf("NUMBER IS NOT ARMSTRONG");
	
	
}
