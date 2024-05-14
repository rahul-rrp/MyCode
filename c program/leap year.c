#include<stdio.h>
int main()
{
//Program for the check Leap year
int  Year;
printf("Entre Year: ");
scanf("%d",&Year);
if((Year%4==0 &&Year%100!=0)||Year%400==0){
	printf("%d is Leap year",Year);
}
else{
	printf("%d is not a Leap Year",Year);
}

return 0;
}
