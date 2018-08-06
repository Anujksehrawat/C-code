#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int info;
	struct node *link;
}*start;
void createList(int m);
void addAtBeg(int m);
void addAtEnd(int m,int n);
void traverse();
void main()
{
	int i,n,m,choice;
	while(1)
	{
	printf("1.CreateList:\n");
	printf("2.Add at begining:\n");
	printf("3.Add at the end:\n");
	printf("4.Traversing of data:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			start=NULL;
			printf("How many nodes you want to add:");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("Enter the element%d:",i+1);
			    scanf("%d",&m);
			    createList(m);
			}
			break;
		case 2:
			printf("Enter the element:");
			scanf("%d",&m);
			addAtBeg(m);
			break;
	    case 3:
		    printf("Enter the element:");
			scanf("%d",&m);
			printf("Enter the position at which you want to insert the element:");
			scanf("%d",&n);
			addAtEnd(m,n);
			break;	
	    case 4:
	    	traverse();
	    	break;
		default:
			printf("Enter wrong choice:\n");
	}
}
}
void createList(int data)
{
	struct node *q,*temp;
	temp=malloc(sizeof(struct node));
	temp->info=data;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
	q=start;
	while(q->link!=NULL)
	{
		q=q->link;
	}
	q->link=temp;
}
}
void addAtBeg(int data)
{
	struct node *temp;
	
	temp=malloc(sizeof(struct node));
	temp->info=data;
	temp->link=start;
	start=temp;
}
void addAtEnd(int data,int pos)
{
	struct node *temp,*q;
	int i;
	q=start;
	for(i=0;i<pos-1;i++)
	{
		q=q->link;
		if(q==NULL)
		{
			printf("There is less than %d elements in linked list.",pos);
			return;
		}
	}
	temp=malloc(sizeof(struct node));
	temp->link=q->link;
	temp->info=data;
	q->link=temp;
}
void traverse()
{
	struct node *trav;
	trav=start;
	if(trav==NULL)
	{
		printf("Node is empty:\n");
	}
	else
	{
		printf("Elements of node are in the following:\n");
		while(trav!=NULL)
		{
			printf("%d\n",trav->info);
			trav=trav->link;
		}
	}
}
