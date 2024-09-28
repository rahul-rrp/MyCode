#include<stdio.h>
#include<string.h>
int f1();
int main()
{
    char str[50],m[50];
    int i,l;
    printf("Enter the two same string in small and capital letter  : ");
    fgets(str,50,stdin);
    fgets(m,50,stdin);
    f1(str,m);
}
int f1(char a[],char b[])
{
    int i=0,j=0,l;
    for(l=0;b[l];l++);

    for(i=0;a[i]!=0&&b[i]!=0;i++)
    {
        if(i<l-2)
        {
        if(a[i]==b[i]+32)
        {
      j++;
     }
    else
    j=0;
    }}
    if(j>0)
    printf("Both string is same ");
    else
     printf("Not both strings are same");
}