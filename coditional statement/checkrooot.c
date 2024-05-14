#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("ENTER THE VALUE OF a,b,c   ");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b-4*a*c);
    if(D>0)
    printf("ROOTS ARE REAL AND DISTINCT ");
    else
     printf("ROOTS ARE REAL AND IMAGINARY ");
}