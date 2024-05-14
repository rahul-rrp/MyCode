#include<stdio.h>
int main()
{
    int n,d,k,p,j,r;
   /* printf("Enter the number ");
    scanf("%d",&n);*/
    for(n=1;n<=1000;n++){
        int i=0;
    k=n;
   while(k)
   {
k=k/10;
i++;
   }
for(k=n,r=0;k;k=k/10){
d=k%10;
for(p=1,j=1;j<=i;j++)
p=p*d;
r=r+p;
}
if(r==n)
printf("%d ",r);
}}