#include<stdio.h>
int main()
{
    char m;
    printf("enter any c :: ");
    scanf("%c",&m);
    if((m>=65&&m<=90)||(m>=97&&m<=122))
    {
    if(m>=65&&m<=90)
    printf(" upper case alphabate ");
    if(m>=97&&m<=122)
    printf(" lower case alphabate ");
    }
    else
    printf("other special character ");
}