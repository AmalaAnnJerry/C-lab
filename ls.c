#include<stdio.h>
void main() 
{
int i, n, A[20],key,flag=0;
printf("enter the count");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",A[i]);
}
printf("enter element to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(A[i]==key)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("element present");
}
else
{
printf("element absent");
}
}




