#include <stdio.h>
#include<conio.h>

void main()
{
  int i,j,k=0,s[10][10],mat[3][10],m,n;
  printf("Enter number of rows and columns :");
  scanf("%d %d",&m,&n);
  printf("Enter elements to sparse matrix : ");
  for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
        scanf("%d",&s[i][j]);   
   } }
   for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
        if(s[i][j]!=0)
          {
          mat[k][0]=i;
          mat[k][1]=j;
          mat[k][2]=s[i][j];
          k++;
          }
        }
       }
   printf("\nRows.     Cloumns.     Value ");
   for(i=0;i<k;i++) {
     for(j=0;j<3;j++) {
        printf("%d  ",mat[i][j]);
        }
       printf("\n");}
      getch();
}
   
   
   
   
   
   