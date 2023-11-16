#include<stdio.h>
void main() 
{
int i, n, A[20],key,flag;
printf("enter the count");
scanf("%d",&n);
printf("enter elements in sorted order");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("enter element to be searched");
scanf("%d",&key);
flag=search(A, key, n) ;
if (flag==-1) 
{
printf("no");
}
else
{
printf("yes at %dth position",flag+1);
}
}


int search(int A[],int key, int n) 
{
int top, bot, mid;
top=0;
bot=n-1;
while(top<=bot) 
{
mid=(top+bot) /2;
if(key==A[mid])
{
return mid;
}
else{
if(key<A[mid])
{
bot=mid-1;
}
else
{
top=mid+1;
}
}
return -1;
}
}



    