#include<stdio.h>
void main()
{
int lim,pos;
     printf("enter the limit:\n");
     scanf("%d",&lim);
     int ar[lim];
     printf("enter the elements:\n");
     for(int i=1;i<=lim;i++)
   {
     scanf("%d",&ar[i]);
   }
    printf("enter the position:\n");
    scanf("%d",&pos);
    int parent=pos/2;
    if(parent<1)
    {
      printf("no parent!\n");
    }
    else
    {
      printf("parent: %d\n",ar[parent]);
    }
    int lc=2*pos;
    if(lc>lim)
    {
      printf("there is no left child!\n");
    }
    else
    {
      printf("left child is: %d\n",ar[lc]);
    }
    int rc=2*pos+1;
    if(rc>lim)
    {
      printf("there is no right child!\n");
    }
    else
    {
      printf("right child is: %d\n",ar[rc]);
    }
 }              
