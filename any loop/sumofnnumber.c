#include<stdio.h>
int main()
{

int i=0,n,sum=0;
printf("Enter the value from which u wnn sum  ");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("Sum of number is  %d",sum);
}