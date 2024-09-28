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
    int l,k=1,i=0;
    for(l=0;b[l];l++);
    printf("The length of string is %d\n",l);
    while(i<l-1)
    {
    if(b[i]==b[i+1])
    {
      while(b[i]==b[i+1])
      {
        k++;
        i++;
      }
      printf("The word %c is %d times in string\n",b[i],k);
      k=1;
      i++;
    }
    else
    {
     printf("The word %c is %d times in string\n",b[i],k);
     i++;
     k=1;
    }
    }
}