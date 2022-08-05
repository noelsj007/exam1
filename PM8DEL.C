#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void delet();
void display ();
struct node 
{
 int data;
 struct node *next;
}*start=NULL,*prev,*end,*newnode,*temp;
void main()
{
int n,ch;
while(1)
{
printf("\n1 Insert 2 Delete 3 Display 4 exit");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
      {
      case 1:
              create();
              break;
      case 2: delet();
              break;
      case 3: display();
             break;
      case 4: exit (0);
      default: printf("enter a valid choice");
}
}
//getc();
}
void create()
{
int value,i;

  newnode=(struct node *)malloc(sizeof(struct node));
  printf("Enter data to insert : ");
  scanf("%d",&value);
  newnode->data=value;
  newnode->next=NULL;
if(start==NULL)
    start=end=newnode;
else{
    end->next=newnode;
    end=end->next;
   }
 
}
void delet()
{
 int del,flag=0;
 if(start==NULL)
    printf("LL is empty");
else{
    printf("Enter data to delete :");
    scanf("%d",&del);
    for(temp=start;temp!=NULL;temp=temp->next)
    {
    if(temp->data==del)
     {
      flag=1;
      if(temp==start)
         start=start->next;
      else
         prev->next=temp->next;
     free(temp);
     }
    else
      prev=temp;
    }
    if(flag==0)
       printf("Element to delete not found");
 }
 }
 void display()
 {
 struct node *temp;
 if(start==NULL)
    printf("LL is empty");
else{
   printf("\nElements of LL : ");
   for(temp=start;temp!=NULL;temp=temp->next)
    printf("-->%d ",temp->data);
 }
 }