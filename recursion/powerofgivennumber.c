#include<stdio.h>
int f1(int,int);
int f1(int n,int m)
{
    int i,mul=1;
for(i=1;i<=m;i++)
{
mul=mul*n;
}
printf("%d",mul);
}
int main()
{
    int x,y;
    printf("Enter the number and power do you want : ");
    scanf("%d %d",&x,&y);
    f1(x,y);
}