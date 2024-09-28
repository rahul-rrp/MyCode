#include<iostream>
using namespace std;
int lcm(int,int,int);
int main()
{
    int a,b,c,d;
    cout<<"Enter the three value ";
    cin>>a>>b>>c;
    d=lcm(a,b,c);
    cout<<"The lcm is "<<d;
}
int lcm(int x,int y,int z)
{
    int l;
    for(l=x>y?x>z?x:z:y>z?y:z;l<=x*y*z;l++)
    {
        if(l%x==0&&l%y==0&&l%z==0)
        {
            return l;
        }
    }
}