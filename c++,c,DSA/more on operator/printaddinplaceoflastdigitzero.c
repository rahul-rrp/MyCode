#include<stdio.h>
int main()
{
    int a,r,ans;
    printf("ENTER THE VALUE\n");
    scanf("%d",&a);
    r=a/10;
    ans=r*10;
    printf("ANSWER IS WITH 0 ADDED AT LAST IN PLACE OF LAST DIGIT :%d",ans);
}