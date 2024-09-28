#include<stdio.h>
#include<string.h>
int f1();
int main()
{
    char str[50];
    printf("Enter the string ");
    fgets(str,50,stdin);
    f1(str);
}
int f1(char b[])
{
    int l,i=0;
    for(l=0;b[l];l++);
    printf("Lenght of string %d",l);
    while(b[i]!='\0'&&b[i+1]!='\0')
    {
      if(b[i]==b[l-2-i])
      {
        i++;
      }
       else
       {
        i=0;
        break;
       }
    }
    if(i>0)
    {
        printf("\nString is palindrome");
    }
    else
    printf("\nString is not palindrome");
}