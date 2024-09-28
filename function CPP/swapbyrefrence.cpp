#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter the two value ";
    cin>>a>>b;
    swap(a,b);
}
void swap(int &x,int &y)
{
   x=x+y;
   y=x-y;
   x=x-y;
   cout<<"Swaping by call by refrence "<<x<<" "<<y;
}