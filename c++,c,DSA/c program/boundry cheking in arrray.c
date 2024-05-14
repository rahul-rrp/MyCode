#include<stdio.h>
int main()
{
	int a[50],size,i;
	printf("enter the size of array :");
	scanf("%d",&size);
		if(50<=size)
	{
		printf("size of arrray is over limit :");
	}
	else 
	{
	printf("Enter the value of element :");
	for(i=0;i<size;i++)
{
	scanf("%d",&a[i]);
}
printf("Print the element of Array :");
for(i=0;i<size;i++)
{
	printf("%d\n",a[i]);
}
}
}
