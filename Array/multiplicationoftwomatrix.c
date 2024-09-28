#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("Enter the values of first matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Value of [%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of second matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Value of [%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiplication of matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            { 
                sum=sum+(a[i][k])*(b[k][j]);
            }
            c[i][j]=sum;
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
     {
        printf("%d \t",c[i][j]);  
     }
        printf("\n");
    }
}