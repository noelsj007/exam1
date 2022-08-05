#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//#include<ctype.h>
#define size 50
int stack[size],top=-1;
void push(int value)
{
 stack[++top]=value;
}
int pop()
{
 return(stack[top--]);
}
void main()
   {
   int i=0,op1,op2;
   char ch,post[size];
   printf("Enter a postfix expression : ");
   scanf("%s",&post);
   while((ch=post[i++])!='\0')
   {
   if(isdigit(ch))
       push(ch-'0');
   else 
   {
   op2=pop();
   op1=pop();
   switch(ch)
     {
      case '+':  push(op1+op2); break;
      case '-':   push(op1-op2); break;
      case '*':  push(op1*op2); break;   
      case '/':  push(op1/op2); break;
     }
   }
  }
  printf("\nResult = %d",stack[top]);
  getch();
}