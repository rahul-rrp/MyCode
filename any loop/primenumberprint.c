#include<stdio.h>
int main(){
int i,j,n=100;
printf("The prime number are ");
for(i=2;i<=n;i++)
{
    for(j=2;j<=i;j++){
    if(i%j==0)
    {
    break;
    }}
    if(i==j)
    printf("%d,",i);   
}
}

