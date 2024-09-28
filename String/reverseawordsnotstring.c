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
int f1(char a[])
{
    int l,j=0,i=0,k=1;
    for(l=0;a[l];l++);
    printf("The lenght of string is %d\n",l);
   while(a[i]!='\0'&&i<l-2)
   {
    while(a[i]!=' '&&a[i]!='\0')
    {
        j++;
        i++;
    }
    printf("%d word of lenght %d\n",k,j);
    i++;
    k++;
    j=0;
  }
  k=0;
  for(i=l-2;i>=0;i--)
  {
    k++;
    if(a[i]==' '||i==0)
    {
        for(j=i;j<k+i;j++)
        {
            printf("%c",a[j]);
        }
        k=0;
        printf(" ");
    }
  }
}