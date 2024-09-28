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
    int i=0,j=0;
    if(a[0]>='a'&&a[0]<='z')
    {
        a[0]=a[0]-32;
    }
    for(i=0;a[i];i++);
    while(j<i-2)
    {
        if(a[j]==' ')
        {  
            if(a[j+1]>='A'&&a[j+1]<='Z')
            {
            j++;
            }
            else
        {
            a[j+1]=a[j+1]-32;
            j++;
        }
        }
        else
        j++;
    }
    printf("%s",a);
}