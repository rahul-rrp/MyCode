#include<stdio.h>
int main()
{
    int i,j,k,l=4;
    for(i=1;i<=l;i++)
    {
        k=1;
        for(j=1;j<=2*l-1;j++)
        {
            if(j>=l+1-i&&j<=l-1+i){
if(k){
printf("*");
}
else{
printf(" ");
}
k=1-k;
}
else
printf(" ");
        }
        printf("\n");
    }
}