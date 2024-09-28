#include<iostream>
using namespace std;
void rotate(int a[],int size,int d,int pos);
int main()
{
    int b[1],k,l,n=1,i;
    cout<<"Enter the size of array ";
    cin>>k;
    cout<<"Enter the direction of rotaion for right 1 and for left -1 ";
    cin>>l;
    cout<<"How many position do u want to rotate ";
    cin>>n;
    rotate(b,k,l,n);
}
void rotate(int a[],int size,int d,int pos)
{
    int temp,k=0,i;
    cout<<"Enter the array ";
    for(i=0;i<size;i++)
    {
     cin>>a[i];
    }
    cout<<"Given array is ";
     for(i=0;i<size;i++)
      cout<<" "<<a[i];
    if(d==1)
    {
    while(pos>0)
    {
        temp=a[size-1];
     for(i=size-1;i>=1;i--)
     {
        a[i]=a[i-1];
     }
     a[0]=temp;
     pos--;
    }
    }
    else
    {
       while(pos>0)
    {
        temp=a[0];
     for(i=0;i<size-1;i++)
     {
        a[i]=a[i+1];
     }
     a[size-1]=temp;
     pos--;
    } 
    }
    cout<<endl;
    cout<<"Rotated array is ";
     for(i=0;i<size;i++)
      cout<<" "<<a[i];
}