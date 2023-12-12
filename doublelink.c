#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node*prev;
struct Node*next;
};
typedef struct Node node;
node*head=NULL,*tail=NULL;
node*newnode(val)
{
node*p;
p=(node*)malloc(sizeof(node));
p->info=val;
p->next=NULL;
p->prev=NULL;
}

void displaybeg()
{
node*curr=head;
while(curr!=NULL)
{
printf("%d- ",curr->info);
curr=curr->next;
}
}

void insertfirst(int val)
{
node*p=newnode(val);
p->info=val;
p->prev=NULL;
if(head==NULL)
head=tail=p;
else{
p->next=head;
head=p;
}
}

void insertafter(int item,int val)
{
node*curr=head,*p;
while(curr!=NULL&&curr->info!=item)
curr=curr->next;
if(curr==NULL)
printf("no such node");
else
{
p=newnode(val);
p->info=val;
p->next=curr->next;
p->prev=curr;
if(curr->next==NULL)
tail=p;
else
p->next->prev=p;
curr->next=p;
}
}

void insertbefore(int item,int val)
{
node*curr=head,*p;
while(curr!=NULL&&curr->info!=item)
curr=curr->next;
if(curr==NULL)
printf("no such node");
else
{
p=newnode(val);
p->info=val;
p->prev=curr->prev;
p->next=curr;
if(curr->prev==NULL)
head=p;
else
p->prev->next=p;
curr->prev=p;
}
}

void delete(int item)
{
node*curr=head;
while(curr!=NULL&&curr->info!=item)
curr=curr->next;
if(curr==NULL)
printf("no such node");
else
{
if(curr->prev==NULL)
head=curr->next;
else
curr->prev->next=curr->next;
{
if(curr->next==NULL)
tail=curr->prev;
else
curr->next->prev=curr->next;
}
free (curr);
}
}

void insertlast(int val)
{
node*p=newnode(val);
p->info=val;
p->next=NULL;
if(tail==NULL)
head=tail=p;
else{
tail->next=p;
tail=p;
}
}

void main()
{
int ch,item,value;
do
{
printf("\n1.insertfirst\n2.insertafter\n3.insertbefore\n4.insertlast\n5.display from start\n67.delete\n7.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter value to be inserted");
       scanf("%d",&value);
       insertfirst(value);
       break;
case 2:printf("enter after which value");
       scanf("%d",&item);
       printf("enter value to be inserted");
       scanf("%d",&value);
       insertafter(item,value);
       break;
case 3:printf("enter before which value");
       scanf("%d",&item);
       printf("enter value to be inserted");
       scanf("%d",&value);
       insertbefore(item,value);
       break;
case 4:printf("enter value to be inserted");
       scanf("%d",&value);
       insertlast(value);
       break;
case 5:printf("Linked list is\n");
       displaybeg();
       break;
case 6:printf("enter item to be deleted");
       scanf("%d",&item);
       delete(item);
       break;
case 7:printf("program is exiting");
       break;
default:printf("invalid choice");
}
}while(ch!=7);
}
























