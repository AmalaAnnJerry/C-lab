#include<stdio.h>
#define size 50
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

int pop()
{
if(isempty())
printf("Stack is empty");
else{
top=top-1;
return S[top];}
}

int peek()
{
if(isempty()) 
printf("Stack is empty");
else
return S[top-1];
}

void displaystack()
{
int i;
for(i=top-1;i>=0;i--)
printf("%c",S[i]);
}

int instackp(char C) 
{
switch(C) 
{
case '+':
case '-':return 2;
         break;
case '*':
case '/':return 4;
         break;
case '^':return 5;
         break;
case '(':return 0;
         break;      
}
}

int inputp(char C)        
{
switch(C) 
{
case '+':
case '-':return 1;
         break;
case '*':
case '/':return 3;
         break;
case '^':return 6;
         break;
}
}

void main()
{
char in[100],post[100];
char c;
int i=0, j=0,token;
printf("Enter an infix expression");
scanf("%s",in);
while(in[i]!='\0')
{
token=in[i];
switch(token)
{
case '(':push(token);
         break;
case '+':         
case '-':
case '*':
case '/':
case '^':while(!isempty()&&instackp(peek())>inputp(token)) 
         post[j++]=pop();
         push(token);
         break;
case ')':while((c=pop())!='(')
         post[j++]=c;
         break;
default :post[j++]=token;
            }
printf("\nToken is %c",token); 
displaystack() ;
i++;
}
while(!isempty())
post[j++]=pop();
post[j]='\0';
printf("Postfix exp:\n %s",post);
}









         




 
