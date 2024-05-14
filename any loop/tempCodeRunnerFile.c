#include<stdio.h>
int main()
{
    int n,d,r=0,k=1,i=0,p,j;
n=1000;
   while(k<=n)
   {
k=k/10;
i++;
   }
for(k=1;k<=1000;k=k/10){
d=k%10;
for(p=1,j=1;j<=i;j++)
p=p*d;
r=r+p;
if(r==k)
printf("%d,",r);
}
}