#include<stdio.h>
#include<stdlib.h> 
void main()
{
	printf("STARTING OF NODE \n");

	struct node{
		int data;
		struct node*next;
	};
	struct node*head,*newnode,*temp;
	head=0;
	int choice=1; 
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("ENTER THE ValUE OF DATA\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("DO U WANN TO CONTINUE THE PRESS 1 FOR CONTINUE OTHERWISE PRESS 0 :");
		scanf("%d",&choice);
	}
	int count,d;
	temp=head;
	while(temp!=0){
	printf("THE DATA PART IS \n:  ");
	d=temp->data;
	printf("%d\n",d);
	temp=temp->next;
	count++;
	printf("TOTAL NO. OF NODE :%d",count);
}
}
