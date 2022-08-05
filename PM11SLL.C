#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *ptr;
}*top=NULL;
void push(int);
void pop();
void display();
void main()
{
  int ch,value;
  while(1)
   {
    printf("\n1.Push 2.Pop 3.Display 4.Exit");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch(ch)
     {
      case 1: printf("Enter data : ");
              scanf("%d",&value);
              push(value);
              break;
      case 2: pop();
              break;
      case 3: display();
              break;
      case 4: exit(0);
      default: printf("\nWrong choice");   
     } 
   }
}

void push(int value)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
    printf("Mem not allocated");
else
{
 if(top==NULL)
 {
   top=temp;
   top->ptr=NULL;
 }
 else
 {
  temp->ptr=top;
  top=temp;
 }
 temp->data=value;
}
}

void pop()
{
 if(top==NULL)
  printf("Stack is empty");
 else 
 {
 printf("\n%d deleted ",top->data);  
 top=top->ptr;
 }
}
void display()
{
struct node *temp;
if(top==NULL)
  printf("Stack is empty");
 else 
 {
 printf("Elements of stack is : ");  
 temp=top;
 while(temp!=NULL)
 {
 printf("%d  ",temp->data);
 temp=temp->ptr;
 }
 }
}



