#include<stdio.h>
int main()
{
    int m;
    printf("ENTER THE NUMBER ");
    scanf("%d",&m);
    if(m%3==0&&m%2==0)
     printf("DIVISIBLE BY 2 AND 3 ");
     else
     printf(" NOT DIVISIBLE BY 2 AND 3 ");
}