#include<iostream>
using namespace std;
int power(int ,int);
int main()
{
    int a,b;
    cout<<"Enter the number and power do u want ";
    cin>>a>>b;
    power(a,b);
}
int power(int x,int y)
{
    int i=0,mul=1;
    while(i<y)
    {
      mul=mul*x;
      i++;
    }
    cout<<"X to the power of Y "<<mul;
}