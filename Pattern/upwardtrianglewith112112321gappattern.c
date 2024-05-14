#include<stdio.h>
int main()
{
    int i,j,k,l=5,m=1;
    for(i=1;i<=l;i++)
    {
        k=1;
        m=1;
        for(j=1;j<=2*l-1;j++)
        {
            if(j>=l+1-i&&j<=l-1+i){
if(k){
printf("%d",m);
j<l?m++:m--;
}
else{
printf(" ");
if(j==5)
m--;
}
k=1-k;
}
else
printf(" ");
        }
        printf("\n");
    }
}