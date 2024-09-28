#include<stdio.h>
#include<string.h>
int f1();
int main()
{
   printf(" The lenght of string is : %d",f1("BHOPAL"));
} 
int f1(char str[])
{
int l=0;
for(l=0;str[l];l++);
return l;
}