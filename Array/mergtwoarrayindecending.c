#include<stdio.h>
#include<stdlib.h>
void input1();
void input2();
int *merg();
int main()
{ 
int a[1],k,s,b[1],i;
printf("Enter the size of first array and second array : ");
scanf("%d %d",&k,&s);
input1(a,k);
input2(b,s);
int *C;
C=merg(a,k,b,s);
printf("\nSorted Array is : ");
    for(i=0;i<k+s;i++)
    {
      printf("%d ",C[i]);
    }
}
void input1(int b[],int n)
{
    int i,d,m,temp,k=0;
    printf("Enter %d number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("First array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
void input2(int c[],int m)
{
    int i,d,temp,k=0;
    printf("\nEnter %d number :",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&c[i]);
    }
    printf("Second array is : ");
    for(i=0;i<m;i++)
    {
        printf("%d ",c[i]);
    }
}
int * merg(int d[],int n,int l[],int m)
{
    int i,j,k;
    int *C;
    C=(int*)malloc((n+m)*sizeof(int));
    for(i=0,j=0,k=0;i<n&&j<m;k++)
    {
        if(d[i]>l[j])
        {
        C[k]=l[j];
        j++;
        }
        else
        {
         C[k]=d[i];
           i++;
        }
    }
    while(i<n)
    {
        C[k]=d[i];
        i++;
        k++;
    }
    while(j<m)
    {
        C[k]=l[j];
        j++;
        k++;
    }
    return C;

}