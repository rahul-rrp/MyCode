#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
    char str[20],v[]="aeiouAEIOU",ch;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.\n",i);
    int l;
    l=i;
    fflush(stdin);
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
        if(str[i]==v[j])
        {
            k++;
           
        }
    }}
    printf("Number of vowels are %d.",k);
} 
