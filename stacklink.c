#include<stdio.h>
#include<malloc.h>

void push();
void pop();
void disp();


struct node
{	int i;
	struct node *next;
}*top=NULL;
void main()
{	int c,w;
	do{
		printf("Enter your choice:\n");
		printf("1.Push element into stack\n");
		printf("2.Pop element from stack\n");
		printf("3.Display stack\n");
		scanf("%d",&c);
		switch (c)
		{ 	case 1:push();
				break;
			case 2:pop();
				break;
			case 3:disp();
				break;
			default: printf("Wrong Choice");
		}
		printf("Do you want to continue:\n");
		scanf("%d",&w);
		}while(w==1);
}

void push()
{	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	printf("Enter the number to insert:");
	scanf("%d",&newnode->i);
	if(top==NULL)
		newnode->next=NULL;
	else
		newnode->next=top;
	top=newnode;
}

void pop()
{	struct node *temp;
	if(top==NULL)
		printf("The Stack Is Empty\n");
	else
	{	top=top->next;
		printf("Popped\n");
	}
}

void disp()
{	int i;
	struct node *ptr;
	ptr=top;
	while(ptr->next!=NULL)
	{	printf("%d->",ptr->i);
		ptr=ptr->next;
	}
	printf("%d\n",ptr->i);

	
}
	
