// using Recursive funtion print Hello World multiple time 
#include<stdio.h>
void helloHW(int count);
int main()
{
helloHW(10);
return 0;	
}
void helloHW(int count)
{
	if(count==0)
	{
		return;
	}
		printf("HELLO WORLD\n");
		helloHW(count-1);
		
	
}

