#include<iostream>
using namespace std;
float area(float);
int area(int ,int);
int main()
{
  area(5.00);
  area(5,6);
}
float area(float a)
{
    float area;
    area=3.14*a*a;
    cout<<"Area of circle is "<<area;
    cout<<endl;
}
int area(int a, int b)
{
    int area;
    area=a*b;
    cout<<"Area of rectangle "<<area;
}