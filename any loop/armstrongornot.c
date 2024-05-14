#include<stdio.h>
int main()
{
    int n,d,r=0,k,i=0,p,j;
    printf("Enter the number ");
    scanf("%d",&n);
    k=n;
   while(k)
   {
k=k/10;
i++;
   }
for(k=n;k;k=k/10){
d=k%10;
for(p=1,j=1;j<=i;j++)
p=p*d;
r=r+p;
}
if(r==n)
printf("ARMSTRONG NUMBER ");
else
printf("NOT ARMSTRONG NUMBER ");
}