#include<stdio.h>
void main() 
{
int i, n, A[20];
printf("enter the count");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
sort(A, n);
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
}


void sort(int A[],int n)
{
int i, j, t, ind;
for(i=0;i<n-1;i++)
{
ind =i;
for(j=i+1;j<n;j++)
{
if(A[j]<A[ind])
{
ind=j;
}
}
t=A[i];
A[i]=A[ind];
A[ind]=t;
}
}







    