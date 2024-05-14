#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER THE VALUE TWO NUMBER ");
    scanf("%d%d",&a,&b);
    printf("\n BEFORE SWAPING %d   %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n AFTER SWAPING %d   %d",a,b);

}