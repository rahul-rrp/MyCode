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
    char b[50];
    int l,i=0,w=1;
    for(l=0;a[l];l++);
    while(i<l-2)
    {
        if(a[i]==' ')
        {
            w++;
            i++;
        }
        i++;
    }
    printf("No. of words are %d\n",w);
    int k,v=0;
    k=w;
    i=l-2;
    while(a[i]!=' ')
    {
        i--;
        v++;
    }
    while(i<l)
    {
    b[k+1]=a[i+1];
    k++;
    i++;
    }
    b[i]='\0';
    b[0]=a[0]-32;
    b[1]=' ';
    for(i=0;a[i]!=' ';i++)
    {
      b[w-1]=a[i+2]-32;
      b[w]=' ';
    }
    printf("%s",b);
}