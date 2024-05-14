// write a program to print Namaste if u ar Indian else Bonjour if your are French
#include<stdio.h>
void namaste();
void bonjour();
int main()
{
printf("IF YOUR ARE A INDIAN THE TYPE I AND IF YOUR ARE A FRENCH THEN TYPE F");
char ch;
scanf("%c",&ch);
if(ch=='i')
{
namaste();
}
else {
	bonjour();
}
		
}
void namaste()
{
		printf("NAMASTE\n");
}
void bonjour()
{
	printf("BONJOUR\n");
}
