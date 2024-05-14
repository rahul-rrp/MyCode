#include<stdio.h>
int nprime(int);
int main()
{
    int k,p,q;
    printf("enter the number  ");
    scanf("%d",&p);
     nprime(p);
    return 0;
}
int nprime(int a)
{
    printf("THE PRIME NUMBERS ARE :");
    int i,j;
    for(i=2;i<a;i++){
         for(j=2;j<a;j++)
        {
            if(i%j==0){    
            break;
        }}
    if(i==j){
    printf("%d,",i);
    }}
}