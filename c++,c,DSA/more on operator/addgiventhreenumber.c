#include<stdio.h>
int main(){
    int a,r,sum=0;

    printf("Enter the number ");
    scanf("\n%d",&a);
r=a/100+a/10%10+a%10;
    printf("ANS:: %d",r);
}