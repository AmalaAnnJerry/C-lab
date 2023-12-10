#include<stdio.h>
#include<stdlib.h>

struct Node
{
int info;
struct Node*next;
};
typedef struct Node node;
node*head=NULL;
node*newnode(val)
{
node*p;
p=(node*)malloc(sizeof(node) );
p->info=val;
p->next=NULL;
}
void insertfirst(int val)
{
node*p;
p=newnode(val);
p->next=head;
head=p;
}
void insertbefore(item,val) 
{
node*curr=head, *prev, *p;
while(curr!=NULL&&curr->info!=item)
{
prev=curr;
curr=curr->next;
}
if(curr==NULL)
printf("No such node");
else
if(prev==NULL)
insertfirst(val);
else
{
p=newnode(val);
p->next=prev->next;
prev->next=p;
}
}
void insertafter(item,val) 
{
node*curr=head, *p;
while(curr!=NULL&&curr->info!=item)
{

curr=curr->next;
}
if(curr==NULL)
printf("No such node");
else
{
p=newnode(val);
p->next=curr->next;
curr->next=p;
}
}
void display()
{
node*curr=head;
while(curr!=NULL)
{
printf("%d-",curr->info);
curr=curr->next;
}
}
void delete(int item)
{
node*curr=head,*prev=NULL;
while(curr!=NULL&&curr->info!=item)
{
prev=curr;
curr=curr->next;
}
if(curr==NULL)
printf("no such node");
else
if(prev==NULL)
curr->next=head;
else
prev->next=curr->next;
free(curr);
}
void main()
{
int ch,value,item;
do{
printf("\n1.insertfirst\n2.insertbefore\n3.insertafter\n4.display\n5.delete\n6.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch (ch) 
{
case 1:printf("Enter value to be inserted");
       scanf("%d",&value);
       insertfirst(value);
       break;
case 2:printf("Enter the before item");
       scanf("%d",&item);
       printf("Enter value to be inserted");
       scanf("%d",&value);
       insertbefore(item, value);
       break;
case 3:printf("Enter the after item");
       scanf("%d",&item);
       printf("Enter value to be inserted");
       scanf("%d",&value);
       insertafter(item, value);
       break;   
case 4:printf("Linked list data\n"); 
       display();
       break;
case 5:printf("Enter element to be deleted");
       scanf("%d",&item);
       delete(item) ;
       break;
case 6:printf("Program is exiting\n"); 
       break;
default:printf("invalid choice");  
}
}while(ch!=6);
}


         
      
       





