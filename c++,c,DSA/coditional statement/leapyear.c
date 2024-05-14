#include<stdio.h>
int main()
{
    int year;
    printf("ENTER THE YEAR ");
    scanf("%d",&year);
    if(year%100==0)
    {
    if(year%400==0)
    printf("LEAP YEAR");
    else 
     printf("NOT LEAP YEAR");
    }
    else if(year%100!=00)
    if(year%4==0)
     printf("LEAP YEAR");
    else
    printf("NOT LEAP YEAR ");
}