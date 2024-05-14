#include<stdio.h>
int main()
{

int i=0,n,sum=0,k=0;
printf("Enter the value from which u wnn sum  ");
scanf("%d",&n);
while(i<=n)
{
    k=i*i;
sum=sum+k;
i++;
}
printf("Sum of square of number is  %d",sum);
}