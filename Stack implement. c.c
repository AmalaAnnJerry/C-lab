#include<stdio.h>
#define size 10
int S[size];
int top=0;

int isfull()
{
if(top>=size)
return 1;
else
return 0;
}

int isempty()
{
if(top==0)
return 1;
else
return 0;
}

void push(int value) 
{
if(isfull()) 
printf("Stack is full");
else
S[top++]=value;
}

int pop()
{
if(isempty())
printf("stack is empty");
else
{
top=top-1;
return S[top];
}
}

int peek()
{
if(isempty())
printf("stack is empty");
else
return S[top-1];
}

void display()
{
int i;
for(i=top-1;i>=0;i--)
printf("%d\t",S[i]);
}

void main()
{
int ch, element;
do{
printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch) 
{
case 1:printf("enter element to be inserted");
       scanf("%d",&element);
       push(element);
       break;
case 2:if(isempty()) 
       printf("stack is empty");
       else
       printf("The element being deleted is%d",pop());
       break;
case 3:if(isempty()) 
       printf("stack is empty");
       else
       printf("Top element is%d",peek());  
       break;
case 4:printf("stack is");              
       display();
       break;
case 5:printf("exiting");   
       break; 
default: printf("invalid choice"); 
}
}while(ch!=5); 
}



