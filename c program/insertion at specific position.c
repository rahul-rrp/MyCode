#include<stdio.h>
int main()
{
	int a[50],size,i;
	printf("enter the size of array :");
	scanf("%d",&size);
		if(50<size)
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

int pos,num;
printf("enter the position :");
scanf("%d",&pos);
printf("Enter the number :");
scanf("%d",&num);
if(pos<=0||pos>size+1)
{
	printf("invalid position you entered\n");
}
else
{

for(i=size-1;i>=pos-1;i--)
{
	a[i+1]=a[i];
}
a[pos-1]=num;
size++;
}
printf("Print the element of Array :");
for(i=0;i<size;i++)
{
	printf("%d\n",a[i]);

}
}
}
