#include<stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("Enter the any operator +,-,*,/");
	scanf("%d",&op);
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	switch(op)
	{
		case'+':
			c=a+b;
			printf("Sum=%d",c);
			break;
			case'-':
				c=a-b;
				printf("Sub=%d",c);
				break;
				case'*':
					c=a*b;
					printf("Mul=%d,c");
					break;
					case'/':
						printf("Div=%d,c");
					
					
	}
}
