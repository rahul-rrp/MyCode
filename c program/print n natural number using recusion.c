#include<stdio.h>
void printN(n);
int main()
{
	printN(10000);
}
void printN(n)
{
	if (n>0){
	
	 (printN(n-1));
	printf("%d\n",n);
}}
