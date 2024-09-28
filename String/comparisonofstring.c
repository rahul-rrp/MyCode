#include<stdio.h>
#include<string.h>
int f1();
int main()
{
    char str[50],m[50];
    int i,l;
    printf("Enter the two strings please : ");
    fgets(str,50,stdin);
    fgets(m,50,stdin);
    f1(str,m);
}
int f1(char b[],char c[])
{
    int i,j;
    for(i=0;b[i];i++);
    for(j=0;c[j];j++);
    printf("\nThe lenght of first string is %d",i);
    printf("\nThe lenght of second string is %d",j);
    if(i==j)
    printf("\nLenght of both string is same");
    else if(i>j)
    printf("\nLength of first string is more than second");
    else
    printf("\nLength of second string is more than first");
    j=0;
    for(i=0;b[i]!='\0'||c[i]!='\0';i++)
    {
        if(b[i]!=c[i])
        {
          j++;
        }
    }
    if(j==0)
    printf("\nString also same");
    else
    printf("\nString not same");
} 