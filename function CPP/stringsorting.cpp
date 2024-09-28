#include<iostream>
#include<string.h>
using namespace std;
void swap();
int main()
{
    swap();
    
}
void swap()
{
    int i,j;
    char b[10];
    bool l;
    cout<<"Enter the string ";
    cin.ignore();
    fgets(b,10,stdin);
    cout<<"For accending -> true or for decending -> false sorting ";
    cin>>l;
    char temp[10];
    if(l)
    {
        for(i=1;i<10;i++)
        {
            for(j=0;j<10-i;j++)
            {
                if(b[j]==b[j+1])
                {
                  temp[i]=b[j];
                  b[j]=b[j+1];
                  b[j+1]=temp[i];
                }
            }
        }
    }
   /* else
    {
        for(i=1;i<10;i++)
        {
            for(j=0;j<10-i;j++)
            {
                if(strcmp(b[j],b[j+1])<0)
                {
                  strcpy(temp,b[j]);
                  strcpy(b[j],b[j+1]);
                  strcpy(b[j+1],temp);
                }
            }
        }
    }*/
     cout<<"The sorted array is ";
    for(i=0;i<10;i++)
     cout<<" "<<b[i] ;
}