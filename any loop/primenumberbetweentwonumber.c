#include<stdio.h>
int main(){
int i,j,k,m;
printf("Enter the two numbers ");
scanf("%d %d",&k,&m);
printf("The prime number are ");
int l=k<m?k:m;
for(i=l;i<=m;i++)
{
    for(j=2;j<i;j++){
    if(i%j==0)
    {
    break;
    }}
    if(i==j)
    printf("%d,",i);   
}
}

