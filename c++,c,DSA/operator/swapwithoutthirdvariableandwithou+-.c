#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number ");
    scanf("\n%d %d",&a,&b);
    printf("  BEFORE SWAPING : :%d %d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("ATER SWAPING:: %d %d",a,b);
}