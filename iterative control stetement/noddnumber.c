#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0) {
        printf("THE FIRST NATURAL ODD NUMBER IS");
        printf(" %d \n",i);
        i++;
        
        }
        else
        i++;
    }
}