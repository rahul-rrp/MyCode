#include<stdio.h>
int main()
{
	char str[10]={'B','H','O','P','A','L'};
	int i;
	for(i=0;i<=5;i++)// HERE THE I=9 IS WORNG BECAUSE THE NO OF CHAR. IS ONLY 6 AND AFTER THIS NOTHING IS PRINTING SO IT IS WRONG THAT WHY WE WILL USE I=5 
	printf("%c",str[i]);
	printf("\n");
	
}
