#include<iostream>
using namespace std;
int add(int , int);
double add(double,double);
int main()
{
    int a,b,c;
    double x,y,d;
    cout<<"Enter the four value ";
    cin>>a>>b>>x>>y;
    c=add(a,b);
    d=add(x,y);
    cout<<"The ans is "<<c;
    cout<<endl;
    cout<<"The 2 ans is "<<d;
}
int add(int a, int b)
{
    return a+b;
}
double add(double x,double y)
{
    return x+y;
}