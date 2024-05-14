#include<stdio.h>
int primeornot(int);
int main()
{
    int k,p,q;
    printf("enter the number  ");
    scanf("%d",&p);
     primeornot(p);
    return 0;
}
int primeornot(int a)
{
    int i;
    if(a==0||a==1)
    {
        printf("Not Prime");
    }
         for(i=2;i<=a-1;i++)
        {
            if(a%i==0){
            printf("not prime");
            break;
        }}
    if(i==a)
    printf("prime");

}