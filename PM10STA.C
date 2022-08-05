#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define size 50
int stack[size],top=-1;
void push(int);
void pop();
void display();
void main()
{
  int ch,value;
  while(1)
  {
  printf("\n1.Insert 2.Delete 3.Display 4.Exit");
  printf("\nEnter your choice : ");
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
 //getch();
}

void push(int value)
{
 if(top==size-1)
   printf("Stack overflow");
 else
 {
 top++;
 stack[top]=value;
 printf("Insertion success ");
 }
}

void pop()
{
if(top==-1)
  printf("\nStack is empty");
else 
{
 printf("Deleted stack data : %d",stack[top]);
 top--;
}
}

void display()
{
int i;
if(top==-1)
  printf("\nStack is empty");
else 
  {
 printf("\nStack elements :");
 for(i=top;i>=0;i--)
    printf("%d\n",stack[i]);
  }
}


 
   