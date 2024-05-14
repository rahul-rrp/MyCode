
# include <stdio.h>
# include <conio.h>
int  armstrong(int) ;

int  main( )
{
int num, n ;
printf(" Enter the Number to check Armstrong Number : ") ;
scanf("%d", &num) ;
n = armstrong(num) ;
if( n == num )
    printf(" Entred Number : %d is Armstrong Number !", num) ;
else
    printf(" Entred Number : %d is not a Armstrong Number !", num) ;
return(0) ;
}

int  armstrong(int num)
{
int s = 0, i, n, k ;
n = num ;
while( n > 0 )
{
    k = n % 10 ;
    s = s + k*k*k ;
    n = n / 10 ;
}
return (s) ;
}
