#include<iostream>
using namespace std;
bool swap(int a[],int n,bool k);
int main()
{
    int b[10],p;
    bool k;
    cout<<"Enter the array ";
    for(p=0;p<10;p++)
     cin>>b[p];
    cout<<"For accending -> true or for decending -> false sorting ";
    cin>>k;
    swap(b,10,k);
    
}
bool swap(int a[],int n,bool k)
{
    int i,j,l;
    if(k)
    {
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    l=a[j];
                    a[j]=a[j+1];
                    a[j+1]=l;
                }
            }
        }
    }
    else
    {
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(a[j]<a[j+1])
                {
                    l=a[j+1];
                    a[j+1]=a[j];
                    a[j]=l;
                }
            }
        }
    }
     cout<<"The sorted array is ";
    for(i=0;i<n;i++)
     cout<<" "<<a[i] ;
}