#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *ptr;
}*front=NULL,*rear=NULL;
void insert();
void delet();
void display();
void main()
{
  int ch,value;
  while(1)
   {
    printf("\n1.Insert 2.Delete 3.Display 4.Exit");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
     {
      case 1: insert();
              break;
      case 2: delet();
              break;
      case 3: display();
              break;
      case 4: exit(0);
      default: printf("\nWrong choice");   
     } 
   }
}

void insert()
{
int value;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
    printf("--Mem not allocated");
else
{
 printf("Enter data to insert :");
 scanf("%d",&value); 
 newnode->data=value;
 newnode->ptr=NULL;
 if(front==NULL)
   front=rear=newnode;
 else
  {
   rear->ptr=newnode;
   rear=rear->ptr;
  }
}
}

void delet()
{
 if(front==NULL)
  printf("--Stack is empty");
 else 
 {
 struct node *temp=front;
 printf("\n  %d deleted ",temp->data);  
 front=front->ptr;
 free(temp);
 }
}
void display()
{
struct node *temp;
if(front==NULL)
  printf("--Stack is empty");
 else 
 {
 printf("Elements of stack is : ");  
 temp=front;
 while(temp!=NULL)
 {
 printf("%d  ",temp->data);
 temp=temp->ptr;
 }

}}


