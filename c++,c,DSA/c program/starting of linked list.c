#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node{
		int data;
		struct node*next;
	};
	struct node*head;
	struct node*newnode;
	struct node *tem;
	head=0;
	int k,count,choice=1;
	while(choice)
	{
newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=newnode=tem;
	}
	else{
		tem->next=newnode;
		tem=newnode;
		}
		printf("do u want to continue(0,1)");
		int d;
	scanf("%d",&d);
	choice=d;
	
}
v
