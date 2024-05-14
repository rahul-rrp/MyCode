#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("ENTER THE VALUE OF N : ");
	scanf("%d",&n);
	printf("\n%d,%d,",a,b);
	for (i=2;i<=n;i++)
	{
	c=a+b;//here c=1
	printf("%d,",c);
	a=b;//here the value of b will store in a (a=1)
	b=c;// here the value of c will store in b (b=1)
}// now after the second the output value will be 2(c=2)
	
}
