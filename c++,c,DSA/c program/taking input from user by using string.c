#include<stdio.h>
int main()
{
		char str[10];
		printf("PLZ ENTER YOUR NAME \n");// her use cannot print multi words here only one word will print at a time
	//	scanf("%s",str);// it occupy more data which is illegal
	fgets(str,10,stdin);// her last char.will null 
		printf("%s",str);
	}
