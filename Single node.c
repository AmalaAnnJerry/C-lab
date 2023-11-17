#include<stdio.h>
#include<stdlib.h>
struct Node
{
int info;
struct Node*next;
};
void main()
{
struct Node* head;
head=NULL;
struct Node* new;
new=malloc(sizeof(struct Node) ) ;
new->info= 4;
new->next=NULL;
head=new;
printf("value:%d",new->info);
free(new);
}


