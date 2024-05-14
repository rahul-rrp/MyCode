#include<stdio.h>
int main()
{
    int i=0,k;
    while(i<=10)
    {
        k=i*i*i;
        printf("THE CUBE OF %d IS  ",i);
        printf("%d\n",k);
        i++;
    }
}