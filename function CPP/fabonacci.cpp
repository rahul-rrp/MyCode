#include<iostream>
using namespace std;
int fabonaci(int);
int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;
    fabonaci(a);
}
int fabonaci(int n)
{
    int a=-1,b=1,c=0,i=0;
    while(c<n)
    {
    c=a+b;
    if(c==n)
    {
      i++;
    }
    else
    {
        a=b;
        b=c;
    }
    }
    if(i>0)
    {
        cout<<"Number in fabanaci list";
    }
    else
    cout<<"Not in list";
}