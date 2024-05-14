#include<stdio.h>
int main()
{
    int a;
    printf("enter month numbner  ");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    printf("no of days is 31");
    else if(a==4||a==6||a==9||a==11)
printf("no of days is 30");
else if(a==2)
printf("no of days is 28 or 29 its depend on the leap year.");
else
printf("Invalid case");
}
