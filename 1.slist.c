
#include<stdio.h>
#include<stdlib.h>

//structure template

typedef struct node
{
	int data;
	struct node *next;
}node;

node *createnode();
void traverse(node *head);
void middlenode(node *head);
void nth_node_frm_end(node *head);
void sort(node *head);
void removedup(node *head);
void insert_in_sort_fashion(node *head);
node * reverse(node *current,node *next);
int main()
{
	node *head=NULL,*tail=NULL,*new=NULL;
	char ch='y';
	while(ch=='y')
	{
		new=createnode();
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
			tail->next=new;
			tail=new;
		}

		printf("do u want to continue(Y/N)\n");
		scanf("%c",&ch);
		getchar();
	}
	traverse(head);
	middlenode(head);
	nth_node_frm_end(head);
	sort(head);
       //	removedup(head);
	insert_in_sort_fashion(head);
	head=reverse(head,(node *)0);
	traverse(head);
}

node *createnode()
{
  node *new=(node*)malloc(sizeof(node));
  printf("enter the value\n");
  scanf("%d",&new->data);
  getchar();
  new->next=NULL;
  return new;
}

void traverse(node *head)
{
	while(head)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

void middlenode(node *head)
{
	node *p=head,*q=head;
	while(q && q->next)
	{
		p=p->next;
		q=q->next->next;
	}
	printf("\nmiddle node is at %d\n",p->data);
}

void nth_node_frm_end(node *head)
{
	node *p=head,*q=head;
	int count=1;
	int n;
	printf("enter the node from last\n");
	scanf("%d",&n);
	while(count<n)
	{
		q=q->next;
		count=count+1;
	}
	while(q->next)
	{
		p=p->next;
		q=q->next;
	}
	printf("the value of nth node frm l
ast= %d\n",p->data);
}

void sort(node *head)
{
	node *p=head,*q;
	int temp;
	while(p->next)
	{
		q=p->next;
		while(q)
		{

		   if(p->data > q->data)
		    {
			temp=p->data;
			p->data=q->data;
			q->data=temp;
	            }
		    q=q->next;
		 }
		p=p->next;
	}
        p=head;
	printf("after sorting\n");
	traverse(p);
}

/*void removedup(node *head)
{
	node *curr=head;
	if(curr==NULL)
	return;
	while(curr->next!=NULL)
	{
		if(curr->data == curr->next->data)
		{
			node *temp=curr->next->next;
			free(curr->next);
			curr->next=temp;
		}
		else
		{
			curr=curr->next;
		}
	}
	curr=head;
	printf("after removing duplicates\n");
	traverse(curr);
}*/

node* reverse(node *current, node *next)
{
       node *ret;
       if(current==(node *)0)
       {
	       return((node *)0); 
       }
ret = (node *)0; 
if (current->next != (node *)0) 
{ 
	ret = reverse(current->next, current);
} 
else 
{
       	ret = current;
}
current->next = next; 
//printf("the reverse list is\n");
//traverse(ret);
return ret;
}
	
     


void insert_in_sort_fashion(node *head)
{
  node *new=(node *)malloc(sizeof(node *));
	printf("enter the data into node\n");
	scanf("%d",&new->data);
	if(head==NULL || head->data > new->data)
	{
	 new->next=head;
	 head=new;
	 }
	 else
	 {
		 node *temp=head;
		 while(temp->next !=NULL && temp->next->data < new->data)
		 {
			 temp=temp->next;
		 }
		 new->next=temp->next;
		 temp->next=new;
	 }
	 traverse(head);
}


