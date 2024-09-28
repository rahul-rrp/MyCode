#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,j,m=32;
    char str[100],ch;
    printf("Enter the string : ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.\n",i);
    int l;
    l=i;
    fflush(stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]==m)
        {
            k++;
        }
    }
    printf("The number space are %d.",k);
} 
