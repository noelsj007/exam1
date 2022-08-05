#include<stdio.h>
#include<conio.h>
#define size 50
int queue[size], rear=-1, front=-1;
void insert();
void delet();
void display ();
void main()
{
 int ch,value;
 while(1){
 printf("\nEnter your choice :");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1: 
          insert();
          break;
  case 2: delet();
           break;
  case 3: display();
           break;
  case 4: exit(0);
 }
}
// getch();
 }

void insert()
{
 int value;
 if(rear==size-1)
    printf("Queue overflow");
 else
    {
    printf("Enter data : ");
    scanf("%d",&value);
    if(front==-1)
	   front++;
    rear++;
    queue[rear]=value;
    }
}

void delet()
{
if(front==-1)
    printf("Queue is empty");
else 
   {
     printf("Element %d deleted ",queue[front]);
    if(front==rear)
       front=rear=-1;
    else 
       front++;
  }
 }
void display()
{
int i;
if(front==-1)
    printf("Queue is empty");
else 
   {
   printf("\nElements of queue : ");
   for(i=front;i<=rear;i++)
      printf("%d <--",queue[i]);
   }
}