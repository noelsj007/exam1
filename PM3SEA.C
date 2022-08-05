#include <stdio.h>
#include<conio.h>

void main()
{
  
  int i,j,m,n,a[10][10],flag=0,s;
  printf("Enter no of rows and columns : ");
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
      {
       scanf("%d",&a[i][j]);
      }
    }
  printf("Enter element to search : ");
  scanf("%d",&s);
  for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
      {
       if(a[i][j]==s)
	{
   printf("Element found at [%d][%d]",i+1,j+1);
   flag=1;
	}
      }
    }
  if(flag==0)
     printf("Element not found");
 getch();
}

