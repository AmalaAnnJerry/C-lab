#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node*next;
};
typedef struct Node node;
node*f=NULL, *r=NULL;
node*newnode(val) 
{
node*p;
p=(node*)malloc(sizeof(node)) ;
p->info=val;
p->next=NULL;
}
int isempty () 
{
if(f==NULL) 
return 1;
else
return 0;
}
void insert(int val) 
{
node*p=newnode(val) ;
p->next=NULL;
if(r==NULL)
f=r=p;
else
r->next=p;
r=p;
}
int delete () 
{
int item;
node*p=f;
item=p->info;
if(f==r)
f=r=NULL;
else
f=f->next;
free (p) ;
return item;
}
void display () 
{
node*curr=f;
while(curr!=NULL) 
{
printf("%d- ",curr->info);
curr=curr->next;
}
}

void main()
{
int ch,value;
do{
printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter value to be inserted");
       scanf("%d",&value);
       insert(value);
       break;
case 2: printf("Value to be deleted is %d",delete());  
        break;
case 3:printf("Queue is");      
       display() ;
       break;
case 4:printf("Program is exiting");  
       break;
default:printf("invalid choice");           
}
}while(ch!=4);
}