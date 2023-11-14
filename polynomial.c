#include<stdio.h>
void main()
{
int terms,i;
printf("enter the terms of the polynomial\n");
scanf("%d",&terms);
struct polynomial{
int coef;
int exp;
}s[terms];
for(i=0;i<terms;i++)
{
printf("enter the coefficents and the exponents:\n");
scanf("%d%d",&s[i].coef,&s[i].exp);
}
for(i=0;i,i<terms;i++)
{
if(i<terms-1)
{
printf("%dX^%d + ",s[i].coef,s[i].exp);
}
else
{
printf("%dX^%d \n",s[i].coef,s[i].exp);
}
}
}
