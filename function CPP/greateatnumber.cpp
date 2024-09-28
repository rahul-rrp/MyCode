#include<iostream>
using namespace std;
int big(int , int);
double big(double,double);
int main()
{
    int a,b,c;
    double x,y,d;
    cout<<"Enter the four value ";
    cin>>a>>b>>x>>y;
    c=big(a,b);
    d=big(x,y);
    cout<<"The ans is "<<c;
    cout<<endl;
    cout<<"The 2 ans is "<<d;
}
int big(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
     return b;
}
double big(double x,double y)
{
    if(x>y)
      return x;
    else
     return y;
}