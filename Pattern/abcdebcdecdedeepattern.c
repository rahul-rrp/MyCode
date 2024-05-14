#include<stdio.h>
int main()
{
    int i,j,k=64;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%c",j+k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}