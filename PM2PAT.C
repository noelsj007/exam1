#include <stdio.h>
#include<conio.h>

void main()
{
  char str[50],pat[50];
  int lenstr,lenpat,flag=0,i,j;
  printf("Enter a string :");
  gets(str);
  printf("Emter a pattern :");
  gets(pat);
  lenstr=strlen(str);
  lenpat=strlen(pat);
  for(i=0;i<=lenstr-lenpat;i++)
  {
   for(j=0;j<lenpat;j++)
     if(str[i+j]!=pat[j])
       break;
   if(j==lenpat)
       {
     flag=1;
     printf("Patten found at %d",i+1);
       }

  }
  if(flag==0)
     printf("Pattern not found!");
 getch();  
}