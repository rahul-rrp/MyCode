#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0;
    char str[20],ch;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.",i);
    int l;
    l=i;
    fflush(stdin);
    printf("\nEnter the character : ");
    scanf("%c",&ch);
    for(i=0;i<l;i++)
    {
        if(ch==str[i])
        {
            k++;
        }
    }
    printf("The given character %c is %d times.",ch,k);
} 
