#include<stdio.h>
int main()
{

int i=0,n,sum=0;
printf("Enter the value from which u wnn sum  ");
scanf("%d",&n);
while(i<=n)
{
    if(i%2==0){
sum=sum+i;
i++;
    }
    else
    i++;
}
printf("Sum of even number is  %d",sum);
}