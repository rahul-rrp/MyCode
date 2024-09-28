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
    int i=0,l,j;
    for(l=0;b[l];l++);
    printf("Lenght of string before trim is %d",l);
    while(b[i]==' ')
    {
      i++;
    }
    printf("\nSpace from starting is %d",i); 
    if(i!=0)
    { 
      j=0;
     while(j<l-1)
     {
       b[j]=b[j+i];
       j++;
     }
     for(j=0;b[j];j++);
     printf("\nLenght after trim from strating is %d",j);
     printf("\nTrim string from starting is :%s",b);
    }
    else
    {
     printf("\nNo space in starting in string");
     j=l;
    }
    int k=j-2,p=0;
    while(b[k]==' ')
    {
        k--;
        p++;
    }
     printf("\nSpace from ending is %d",p); 
     for(l=0;b[l];l++);
     if(p!=0)
     {
        j=l-1;
     while(j<=l)
     {
        b[j-p]='\0';
        j++;
     }
     for(j=0;b[j];j++);
        printf("\nLenght after trim from ending is %d",j);
    printf("\nTrim string from ending is :%s",b);
   }
   else
   printf("\nNo space in ending ");
}