#include<stdio.h>
int main()
{
float mt,ph,ch,en,hi,c,per,total;
	printf("Entre Total max marks :");
	scanf("%f",&total);
	printf("Enter the Maths number :");
	scanf("%f",&mt);
	printf("Enter the Physics number :");
	scanf("%f",&ph);
	printf("Enter the Chemistry number :");
	scanf("%f",&ch);
	printf("Enter the English number :");
	scanf("%f",&en);
	printf("Enter the Hindi number :");
	scanf("%f",&hi);
	printf("SUM OF THE NUMBER:");
	c=mt+ph+ch+en+hi;
	printf("%f\n",c);
	printf("Your Percantage is :");
	per=c/total*100;
	printf("%f\n",per);
	if(per>=90)
	{
		printf("your grade is : A\n");
	}
	else if (per>=80)
	{
		printf("your grade is : B\n");
	}
	else if (per>=60)
	{
		printf("your grade is : C\n");
	}
	else {
		printf("your grade is : D\n");
	}
}
