#include<iostream>
using namespace std;
void add(int,int,int);
int main()
{
    int a=5;
    add(a,5,5);
}
void add(int a,int b,int c=2)
{
    int j;
    j=a+b+c;
    cout<<"The additon is "<<j;
}