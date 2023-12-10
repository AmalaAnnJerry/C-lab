#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node*next;
};
typedef struct Node node;
node*top=NULL;
int isempty()
{
if(top==0)
return 1;
else
return 0;
}
node*newnode(val)
{
node*p;
p=(node*)malloc(sizeof(node) );
p->info=val;
p->next=NULL;
}
void push(int val)
{
node *p;
p=newnode(val);
p->next=top;
top=p;
}
}
void display()
{
node*curr=top;
while(curr!=NULL)
{
printf("%d-",curr->info);
curr=curr->next;
}
}
int pop() 
{
int item;
if(isempty())
printf("Stack is empty");
else
{
node*p=top;
top=top->next;
item=p->info;
free(p);
return item;
}
}
int peek()
{
int item;
if(isempty())
printf("Stack is empty");
else
item=top->info;
return item;
}
void main()
{
int ch,value;
do{
printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter value to be inserted");
       scanf("%d",&value);
       push(value);
       break;
case 2: printf("Value to be deleted is %d",pop());  
        break;
case 3:printf("Top element is %d",peek());    
       break;
case 4:printf("Stack is");      
       display() ;
       break;
case 5:printf("Program is exiting");  
       break;
default:printf("invalid choice");           
}
}while(ch!=5);
}