#include<stdio.h>
#include<string.h>
int f1();
int main()
{
    char str[50],m[50];
    int i,l;
    printf("Enter the two string : ");
    fgets(str,50,stdin);
    fgets(m,50,stdin);
    f1(str,m);
}
int f1(char a[],char b[])
{
    int i,j,k;
    for(i=0;a[i];i++);
    for(j=0;b[j];j++);
    printf("The lenght of first string is %d\n",i);
     printf("The lenght of second string is %d\n",j);
     k=0;
     a[i-1]=' ';
     while(b[k]!='\0')
     {

     a[i]=b[k];
     k++;
     i++;
     }
     if(b[k]=='\0')
     a[i]='\0';
     printf("%s",a);
}