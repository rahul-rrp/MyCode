#include<stdio.h>
void printtable(int n);
int main()
{
	int n;
	printf("Enter the value of N");
	scanf("%d",&n);
	printtable(n);//here n is a variable or calling statement then it is call by argument/actual parameter 
}
void printtable(int n)//here n is parameter / formal value 
{
	int i=1;
for(i=1;i<=10;i++)
	{
	printf("%d\n",i*n);
}
}
