#include<stdio.h>
# include<conio.h>
int armst(int);
 
int main()
{
int i,n;
printf("Enter the value of number : ");
scanf("%d",&n);
i=armst(n);
if (i==n)
printf("ARMSTRONG......%d",n);
else
printf("NOT ARMSTRONG.......%d",n);
return 0;
}

int armst(int n)
{
int r,s=0,i;
i=n;
while (i>0)
{
r=i%10;
s=s+r*r*r;
i=i/10;
}
return (s);
}

