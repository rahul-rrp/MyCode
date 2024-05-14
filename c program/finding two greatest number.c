#include<stdio.h>
int main()
{
//Program : for two number entered by user equal or not 
int a,b,c;
printf("Enter the first value :");
scanf("%d",&a);
printf("Enter the the second value");
scanf("%d",&b);
printf("Enter the third value");
scanf("%d",&c);
printf("Result\n");
if (a>b&&a>c)
{
	printf("A IS BIGGER\n");
}
else if(b>a&&b>c)
{
printf("B IS BIGGER\n");
}
else
{
printf("C IS BIGGER");
}
}

