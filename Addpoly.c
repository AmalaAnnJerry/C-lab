#include<stdio.h>
#include<stdlib.h>
struct Node
{
int expo;
int coeff;
struct Node*next;
};
typedef struct Node node;
node*poly1, *poly2, *poly3=NULL;
node*p1, *p2, *p3;
node*newnode() 
{
node*p=(node*) malloc(sizeof(node)) ;
p->next=NULL;
return p;
}
node*read() 
{
int c, e, ch;
node*curr, *head;
head=newnode() ;
curr =head;
do{
printf("enter constant and expo");
scanf("%d%d",&c,&e);
curr->coeff=c;
curr->expo=e;
printf("do you wish to continue 1.yes0.no");
scanf("%d",&ch);
if(ch==1)
{
curr->next=newnode();
curr=curr->next;
}
}while(ch==1);
curr->next=NULL;
return head;
}

void Addpoly() 
{
p1=poly1;
p2=poly2;
p3=newnode();
poly3=p3;
while(p1!=NULL&&p2!=NULL)
{
if(p1->expo==p2->expo)
{
p3->coeff=p1->coeff+p2->coeff;
p3->expo=p1->expo;
p1=p1->next;
p2=p2->next;
}
else
{
if(p1->expo>p2->expo)
{
p3->coeff=p1->coeff;
p3->expo=p1->expo;
p1=p1->next;
}
else
{
p3->coeff=p2->coeff;
p3->expo=p2->expo;
p2=p2->next;
}
}
if(p1!=NULL&&p2!=NULL)
{
p3->next=newnode();
p3=p3->next;
}
}
while(p1!=NULL)
{
p3->next=newnode();
p3=p3->next;
p3->coeff=p1->coeff;
p3->expo=p1->expo;
p1=p1->next;
}
while(p2!=NULL)
{
p3->next=newnode();
p3=p3->next;
p3->coeff=p2->coeff;
p3->expo=p2->expo;
p2=p2->next;
}
}
void main()
{
printf("input poly1\n");
poly1=read(poly1);
printf("input poly2\n");
poly2=read(poly2);
Addpoly();
printf("sum is\n");
print(poly3) ;
}
void print(node*a)
{
node*curr;
curr=a;
while(curr!=NULL)
{
printf("%d(x^%d)",curr->coeff,curr->expo);
curr=curr->next;
if(curr!=NULL)
{
printf("+");
}
}
}