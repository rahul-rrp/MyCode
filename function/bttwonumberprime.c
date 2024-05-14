#include<stdio.h>
int bttwoprime(int,int);
int main()
{
    int k,p,q;
    printf("enter the two numbers  ");
    scanf("%d",&p);
    scanf("%d",&q);
     bttwoprime(p,q);
    return 0;
}
int bttwoprime(int a,int b)
{
    printf("THE PRIME NUMBERS ARE :");
    int i,j;
    for(i=a+1;i<b;i++){
         for(j=a;j<b;j++)
        {
            if(i%j==0){    
            break;
        }}
    if(i==j){
    printf("%d,",i);
    }}
}