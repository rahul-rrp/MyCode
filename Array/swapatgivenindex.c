#include<stdio.h>
void input();
int main()
{
int a[1],k;
printf("Enter the size of array : ");
scanf("%d",&k);
input(a,k);
}
void input(int b[],int n)
{
    int i,d,m,p,temp;
    printf("Enter %d number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Given array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nIn which indices(0 To %d) you want to swap please enter: ",n-1);
    scanf("%d %d",&m,&p);
    temp=b[p];
    b[p]=b[m];
    b[m]=temp;
    printf("Swapped array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}