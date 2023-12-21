#include<stdio.h>
void main()
{
int n,i,A[20];
printf("enter count");
scanf("%d",&n);
printf("enter elements");
for(i=1;i<=n;i++)
scanf("%d",&A[i]);
hsort(A, n);
printf("sorted array\n");
for(i=1;i<=n;i++)
printf("%d\n",A[i]);
}

void hsort(int A[], int n) 
{
int size=n, i;
buildheap(A, n) ;
for(i=1;i<n;i++)
{
swap(&A[1], &A[size]);
size--;
heapify (A, 1,size) ;
}
}

void buildheap(int A[], int n) 
{
int i;
for(i=n/2;i>=1;i--)
heapify(A, i,n);
}

void heapify(int A[],int i, int size)
{
int lar=i, l, r;
l=left(i) , r=right(i);
if(A[l]>A[lar]&&l<=size)
lar=l;
if(A[r]>A[lar]&&r<=size)
lar=r;
if(lar!=i)
{
swap(&A[lar],&A[i]);
heapify(A, lar, size);
}
}

int left(int i)
{
return 2*i;}

int right(int i)
{
return 2*i+1;}

void swap(int*p,int*q)
{
int t;
t=*p;
*p=*q;
*q=t;
}
