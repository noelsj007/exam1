#include<stdio.h>
#include<conio.h>
typedef struct tree
{
int data;
struct tree *left;
struct tree *right;
}trees;
void insert(trees **root,int data);
void search(trees **root,int data);
void main()
{
int ch,y=1,data;
trees*root=NULL;
clrscr();

while(y==1)
{  printf("\n1.Insert\n2.search");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter your data : ");
scanf("%d",&data);
insert(&root,data);
break;
case 2:if(root==NULL)
printf("\nTree does not exist");
else
printf("\nEnter your search data :  ");
scanf("%d",&data);
search(&root,data);

break;
default:printf("\n invalid choice");
}
printf("\nTo continue enter 1 ,exit enter 0 : ");
scanf("%d",&y);
}
getch();
}
void insert(trees **root,int data)
{
if((*root)==NULL)
{
(*root)=(trees*)malloc(sizeof(trees));
(*root)->data=data;
(*root)->left=NULL;
(*root)->right=NULL;
}
else if((*root)->data>data)
insert(&((*root)->left),data);
else
insert(&((*root)->right),data);
}

void search(trees **root,int data)
{
if((*root)==NULL)
printf("\Element not found in the tree");
else if((*root)->data==data)
printf("\nElement found in the tree");
else if(data>(*root)->data)
search(&((*root)->right),data);
else
search(&((*root)->left),data);
}