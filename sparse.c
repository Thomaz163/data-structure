#include<stdio.h>
void main()
{
int i,j,row,col,count=0,c[5][5],k=1;
struct sparse{
int row;
int col;
int value;
}s[10];
printf("enter number of row and column: \n");
scanf("%d%d",&row,&col);
printf("enter the elements: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&c[i][j]);
}}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(c[i][j]!=0)
{
s[k].row=i;
s[k].col=j;
s[k].value=c[i][j];
k++;count++;
}
}
}
s[0].row=row;
s[0].col=col;
s[0].value=count;printf("\nthe tuple representation is:\n");
printf("\nrow\tcol\tvalue\n");
for(i=0;i<k;i++)
{
printf("%d\t%d\t%d\n",s[i].row,s[i].col,s[i].value);
}}
