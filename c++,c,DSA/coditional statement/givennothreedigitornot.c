#include<stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER  ");
    scanf("%d",&a);
    if((a/100)>=1&&(a/100)<=9)
    printf("GIVEN NUNBER IS THREE DIGIT");
    else
    printf("GIVEN NUNBER IS NOT THREE DIGIT");
}