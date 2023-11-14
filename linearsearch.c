//Linear search;
#include<stdio.h>
void main()
{
int limit,i,check,c,co=0;
co+=2;
printf("enter  the limit: ");
scanf("%d",&limit);co++;
int b[limit];
printf("enter the numbers: \n");
for(i=0;i<limit;i++)
{
co++;
scanf("%d",&b[i]);
co++;
}
//searching process;
printf("enter the number to be checked: \n");
scanf("%d",&check);co++;
for(i=0;i<limit;i++)
{
co++;
if(b[i]==check)
{
co++;
printf("the number %d present in the group\n",check);
c=1;co++;
break;
}
}
co++;
if(c==0)
{
co++;
printf("the number %d  is not present in the group\n",check);
co++;
}
printf("time complexity is= %d\n",co);
co++;
co++;
printf("space complexity is= %d\n",4*5+4*limit);
}

