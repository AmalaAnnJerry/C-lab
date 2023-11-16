#include<stdio.h>
#define size 5
int Q[size];
int f=-1, r=-1;
int isfull()
{
if(f==(r+1)%size)
return 1;
else
return 0;
}

int isempty()
{
if(f==-1) 
return 1;
else 
return 0;
}

void insert(int value) 
{
if(isfull())
printf("Queue is full");
else
{
if(isempty())
f=r=0;
else
r=(r+1)%size;
Q[r]=value;
}
}


int delete()
{
int value;
if(isempty()) 
printf("Queue is empty");
else
value=Q[f];
if(f==r)
f=r=-1;
else
f=(f+1)%size;
return value;
}

void display()
{
int i;
if(isempty()) 
printf("Queue is empty");
else
{
if(f<=r)
for(i=f;i<=r;i++)
printf("%d",Q[i]);
else
for(i=f;i<size;i++)
printf("%d",Q[i]);
for(i=0;i<=r;i++)
printf("%d",Q[i]);
}
}

void main()
{
int ch, element;
do{
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter element to be entered");
       scanf("%d",&element);
       insert(element);
       break;
case 2:printf("The element to be deleted is %d",delete());
       break;
case 3:printf("Queue is\n");
       display() ;
       break;
case 4:printf("Exiting"); 
       break;     
default:printf("Invalid choice");
        break;
}
}
while(ch!=4);
}
        