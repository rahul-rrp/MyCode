#include<stdio.h>
int Nn(int);
int Nn(int n)
{
    if(n>0)
    {
        Nn(n-1);
        printf("%d ",n);
    }
}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    Nn(b);
    
}