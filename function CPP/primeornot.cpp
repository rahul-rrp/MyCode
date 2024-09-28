#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int l;
    cout<<"Enter the number ";
    cin>>l;
    prime(l);
}
int prime(int a)
{
   int i,k=0;
   for(i=2;i<=a-1;i++)
   {
    if(a%i==0)
    {
        k++;
    }
   }
   if(k>=1)
   {
    cout<<"Not prime number ";
   }
   else
   {
    cout<<"Prime number";
   }
}