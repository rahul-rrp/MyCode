#include<stdio.h>
int Nn(int);
int Nn(int n)
{
    if(n>0)
    {
         printf("%d ",n);
        Nn(n-1);
       
    }
}
int main()
{ 
    int p,b;
    printf("Enter number : ");
    scanf("%d",&b);
    Nn(b);
    
}