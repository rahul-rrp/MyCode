#include<stdio.h>
int main(){
int i,j,m;
printf("Enter the  number ");
scanf("%d",&m);
printf("The next prime number is ");
for(i=m+1; ;i++)
{
    for(j=2;j<=i;j++){
    if(i%j==0)
    {
    break;
    }}
    if(i==j){
    printf("%d",i);  
    break;
    }
}
}

