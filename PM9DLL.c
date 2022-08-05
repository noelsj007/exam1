#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev,*next;
}*head,*tail=NULL,*cur;
void forward();
void reverse();
void main()
{
  int n,i,x;
  printf("Enter number of nodes : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
     {
     printf("\nEnter %d element :",i+1);
     scanf("%d",&x);
     addnode(x);
     }
  printf("\nFrwd traversed list : ");
  forward();
  printf("\nRev traversed list : ");
  reverse();
}
void addnode(int x)
{
 struct node *newnode=(struct node *)malloc(sizeof(struct node));
 newnode->data=x;
 newnode->next=NULL;
 if(head==NULL)
   {
     head=tail=newnode;
     head->prev=NULL;
     tail->next=NULL;
   } 
 else
   {
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    tail->next=NULL;       
   }
}
void forward()
{
 cur=head;
 if(head==NULL) 
   {
   printf("\nList is empty");
   return;
   }
 while(cur!=NULL)
   {
    printf("%d \t",cur->data);
    cur=cur->next;
   }    
}
void reverse()
{
   cur=tail;
   if(tail==NULL)
     printf("\nList is empty");
   while(cur!=NULL)
      {
      printf("%d \t",cur->data);
      cur=cur->prev;
      }
}















