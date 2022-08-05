#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
}*head=NULL;
void create(int n);
void display();
void main()
{
  int n;
  printf("Enter number of nodes : ");
  scanf("%d",&n);
  create (n);
  printf("Elements in LL : ");
  display ();
 // getch();
}

void create(int n)
{
  int i,item;
  struct node *temp,*newnode;
  if(n==0)
     exit(0);
  head=(struct node *)malloc(sizeof(struct node));
  if(head==NULL)
     printf("Mem allocation failed");
  else
     {
      printf("Enter data :");
      scanf("%d",&item);
      head->data=item;
      head->next=NULL;
      temp=head;
      for(i=2;i<=n;i++)
        {
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
           printf("Mem allocation failed");
        else
         {
          printf("Enter data :");
          scanf("%d",&item);
          newnode->data=item;
          newnode->next=NULL;
          temp->next=newnode;
          temp=temp->next;
          }
       }
   }
}

void display ()
{
  struct node *temp;
  if(head==NULL)
     printf("List is empty");
  else
     {
      temp=head; 
      while(temp!=NULL)
           {
           printf("-->%d",temp->data);
           temp=temp->next;
           }
     }
  
}
     
     
     
     
     
     
     
     
  
