#include<stdio.h>
int main()
{
//Program :greatest value from three number
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
	printf("A is Greatest\n");
}
else if(b>a&&b>c)
{
printf("B is Greatest\n");
}
else
{
printf("C is Greatest");
}
return 0;
}
