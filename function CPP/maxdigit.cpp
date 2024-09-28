#include<iostream>
using namespace std;
int maxdigit(int);
int main()
{
    int a;
    cout<<"Enter the number ";
    cin>>a;
    maxdigit(a);
}
int maxdigit(int n)
{
    int max=-1,r;
    while(n>0)
    {
    r=n%10;
    if(max<r)
    {
        max=r;
    }
    n=n/10;
    }
    cout<<"Max digit in number is "<<max;
}