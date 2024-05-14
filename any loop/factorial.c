#include<stdio.h>
int main()
{

int i=0,n,fact=1;
printf("Enter the value from which u wnn sum  ");
scanf("%d",&n);
while(i<=n)
{
    if(i==0){
        i=1;
fact=fact*i;
i++;
}
else{
   fact=fact*i;
i++; 
    
}}
printf("Factorial of number is  %d",fact);
}