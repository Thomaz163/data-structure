#include<stdio.h>
void main()
{
int x,i,n,c=0,count=0,j,temp;
count++;count++;
printf("enter the limit\n");
scanf("%d",&n);
count++;
int a[n];
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
count++;
printf("sorted array is\n");
for(i=0;i<n;i++)
{
count++;
for(j=i+1;j<n;j++)
{
count++;
if(a[i]>a[j])
{
count++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
count=count+3;
}
}
printf("%d\t",a[i]);
count++;
}
printf("\n");
int l=0,r=n-1,m=(l+r)/2;
count=count+3;
printf("enter the value to be searched\n");
scanf("%d",&x);
count++;
while(l<=r)
{
count++;
if(x==a[m])
{
count++;
c=1;
count++;
printf("element is present\n");
break;
}
else if(x<a[m])
{
count++;
r=m-1;
count++;
m=(l+r)/2;
count++;
}
else if(x>a[m])
{
count++;
l=m+1;
count++;
m=(l+r)/2;
count++;
}
}
if(c==0)
{
count++;
printf("element is not present\n");
}
count=count+2;
printf("time complexity is %d\n",count);
printf("space complexity is %d\n",40+4*n);
}





	

