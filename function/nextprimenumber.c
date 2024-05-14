#include<stdio.h>
int nextprime(int);
int main()
{
    int k,p,q;
    printf("enter the number  ");
    scanf("%d",&p);
     nextprime(p);
    return 0;
}
int nextprime(int a)
{
    int i,j;
    for(i=a+1;;i++){
         for(j=2;j<=i;j++)
        {
            if(i%j==0){    
            break;
        }}
    if(i==j){
    printf("THE NEXT PRIME NUMBER IS :%d",i);
    break;
    }}
}