#include <stdio.h>
#include<conio.h>
//Compiler version gcc  6.3.0

void main()
{
  char str[50],*ptr;
  int l=0,i;
  printf("Enter a string :");
  gets(str);
  ptr=str;
  for(i=0;*ptr!='\0';i++)
  {
    ptr++;
    l++;
  }
  /*
     for(i=0;str[i]=='\0';i++)
  {
    ptr++;
  }
  */
		  ptr--;
  printf("Reversed string is :");
  for(i=l;i>0;i--)
  {
    printf("%c",*ptr);
    ptr--;
  }
 getch();
}