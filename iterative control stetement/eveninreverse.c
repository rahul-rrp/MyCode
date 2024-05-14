#include<stdio.h>
int main()
{
    int i=20;
    while(i>=0)
    {
        if(i%2==0) {
        printf("THE FIRST NATURAL EVEN NUMBER IN REVERSE");
        printf(" %d \n",i);
        i--;
        
        }
        else
        i--;
    }
}