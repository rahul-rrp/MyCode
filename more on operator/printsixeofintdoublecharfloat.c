#include<stdio.h>
int main()
{ int x,y,z,a;
    x=sizeof(int);
    y=sizeof(char);
    z=sizeof(float);
    a=sizeof(double);
    printf("size of int :%d\n size of char : %d\n size of float :%d\n Size of Double: %d",x,y,z,a);
}