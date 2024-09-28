#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0;
    char str[20],ap=0,dt=0,ot=0;
    printf("Enter the string : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    printf(" The length of String is : %d.\n",i);
    int l;
    l=i;
    fflush(stdin);
    for(i=0;str[i];i++)
    {
        switch(str[i])
        {
          case 'a'...'z':
          case 'A'...'Z':
          ap++;
          break;
          case '0'...'9':
          dt++;
          break;
          default :
          ot++;
        }
    }
    printf("Alphate count is %d\ndigit count is %d\nother symbol is %d.",ap,dt,ot);
} 

