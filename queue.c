#include<stdio.h>
int a[5],max_size,front=0,rear=-1;
void enqueue();
void dequeue();
void display();
void peek();
void main()
{
int choice;
printf("enter the maximum size of the queue: \n");
scanf("%d",&max_size);
while(choice!=5)
{
printf("enter the choice:\n 1.enqueue 2.dequeue 3.display 4.peek 5.exit\n");
scanf("%d",&choice);
if(choice==1)
{
enqueue();
}
else if(choice==2)
{
dequeue();
}
else if(choice==3)
{
display();
}
else if(choice==4)
{
peek();
}
}
}
void enqueue()
{
int item;
if(rear>(max_size-2))
{
printf("\noverflow\n");
}
else
{
printf("enter the elements:\n");
rear++;
scanf("%d",&a[rear]);
}
}
void dequeue()
{
if(rear<front)
{
printf("underflow\n");
}
else
{
printf("removed element is: %d\n",a[front]);
front++;
}
}
void display()
{
if(rear<front)
{
printf("queue is empty\n");
}
else
for(int i=front;i<rear+1;i++)
{
printf("%d\n",a[i]);
}
}
void peek()
{
if(rear<front)
{
printf("stack is empty\n");
}
else
{
printf("%d\n",a[front]);
}
}
