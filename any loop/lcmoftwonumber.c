#include<stdio.h>
int main()
{
    int a,b,i=2,f=0,k=1;
    printf("Enter the two number ");
    scanf("%d%d",&a,&b);
while(a>1||b>1)
    {
    if(a%i==0)

    {
        a=a/i;
        f=1;
    }
    if(b%i==0)
       {
         b=b/i;
         f=1;
       }
       if(f==1){
    k=k*i;
        f=0;
        }
        else
        i++;
    }
        
     printf("The LCM is %d",k);
}