#include<stdio.h>
#include<string.h>
int f1();
char f2();
int main()
{
    char str[50],m[50];
    int i,l;
    printf("Enter the string please : ");
    fgets(str,50,stdin);
    l=f1(str);
    printf("the lenght of string is %d",l);
    f2(str);
    //printf("REverse of string is %s",m);
}
int f1(char b[])
{
    int i;
    for(i=0;b[i];i++);
    return i-1; 
}
char f2(char c[])
{
    int i,l;
    char ch;
    l=f1(c);
    for(i=0;i<l/2;i++)
    {
      ch=c[i];
      c[i]=c[l-1-i];
      c[l-1-i]=ch;
    }
    printf("\nReverse of string is %s",c);
}