#include<stdio.h>
//write a program to print a pattern 
/*1
  2 2
  3 6 3
  5 10 15 4
  

*/
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                if(i==j)
                {
                printf("%d ",i);
                if(i==4){
                printf("%d",(i+1)*j);
            }}
            else 
            {
                printf("%d ",i*j);
            } }
            else
            printf(" ");
        }
        printf("\n");
    }
}