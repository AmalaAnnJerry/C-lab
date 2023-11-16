#include<stdio.h>
#define size 10
char S[size];
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

void push(char C) 
{
if(isfull()) 
printf("Stack is full");
else
S[top++]=C;
}

char pop()
{
if(isempty())
printf("stack is empty");
else
{
top=top-1;
return S[top];
}
}

void main()
{
char C[20];
int i;
printf("Enter a string");
scanf("%s",C);
for(i=0;C[i]!='\0';i++)
{
if(isfull())
printf("Stack is full");
else
push(C[i]);
}
printf("Reversed string is\n");
while(!isempty())
{
printf("%c",pop());
printf("\n");
}
}



