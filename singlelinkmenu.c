#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
 int id;
 struct employee*link;
}emp;

emp *head=NULL;
void create_node()
{
 struct emp* temp;
 temp=(emp*)malloc(sizeof(emp));
 printf("enter the id,name\n");
 scanf("%d%s",&temp->id,temp->name);
 getchar();
 temp->link=NULL;
 if(head==NULL)
  head=temp;
 else
  {
     emp *p;
     p=head;
     while(p->link!=NULL)
     {
	   P=P->link;
     }
     p->link=temp;
  }
                
} 

int length()
{
 int count=0;
 emp *temp;
 temp=head;
 while(temp!=NULL)
 {
 count++;
 temp=temp->link;
 }
 return count;
}

void display()
{
 emp *temp;
 temp=head;
 if(temp==NULL)
 printf("List is empty\n");
 else
  while(temp!=NULL)
  {
   printf("id: %d  name:%s\n",temp->id,temp->name);
   temp=temp->link;
  }
 printf("\n");
}

emp *insert_at_pos(emp **head)
{
 emp *temp;
 int p.i;
 printf("enter the position at which node to be inserted\n");
 scanf("%d",&p);
 if(p>length())
 printf("invalid position\n");
 else
 {
 new=createP_node();
 if(p==1);
 {
  temp->link=head;
  return new;
  
int main()
{
	int ch;

 while(1)
 {
	printf("1.create node\n");
	printf("2.insert note at a given position\n");
	printf("3.insert a node before a given key\n");
	printf("4.insert a node after a given key\n");
	printf("5.delete a node\n");
	printf("6.length\n");
	printf("7.display\n");
	printf("8.reverse linkedlist\n");
	printf("9.quit\n");
	printf("enter your choice\n");
	scanf("%d",ch);


  switch(ch)
   {
    case 1:
	create_node();
    case 2:
	insert_at_pos(head);
    case 3:
	insert_before_key(head);
    case 4:
	insert_after_key(head);
    case 5:
        delete_node(&head);
    case 6:
        length();
    case 7:
         display();
    case 8:
         reverse(head);
    case 9:
	 quit;

   }
 }
}




	
