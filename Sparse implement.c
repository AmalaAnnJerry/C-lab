#include<stdio.h>
void main() 
{
int i, j, r, c, A[10][10], S[20][3];
printf("enter row and column size");
scanf("%d%d",&r,&c);
printf("enter elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
}
}
Sparse(A, r, c, S);
}

void Sparse(int A[10][10],int r, int c, int S[20][3])
{
int i, j, k=1;
S[0][0]=r;
S[0][1]=c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(A[i][j]!=0)
{
S[k][0]=i;
S[k][1]=j;
S[k][2]=A[i][j];
k++;
}
}
}
S[0][2]=k;
Print(S,k);
}

void Print(int S[20][3],int k)
{
int i, j;
printf("sparse matrix:\n");
for(i=0;i<k;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",S[i][j]);
}
printf("\n");
}
}
