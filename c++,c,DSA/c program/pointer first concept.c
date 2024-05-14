#include<stdio.h>
int main()
{
	int x=4;
	int*i;
	 i=&x;
	prinf("%d %d %d",i,*&x,x);
}
