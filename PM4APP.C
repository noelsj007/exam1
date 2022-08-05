#include <stdio.h>
#include<conio.h>
void main()
{
 int m,n,a[10],b[10],c[20],i,j;
 printf("Enter size of first and second array : ");
 scanf("%d %d",&m,&n);
 printf("Enter elements of first array :");
 for(i=0;i<m;i++)
    scanf("%d",&a[i]);
 printf("Enter elements of second array :");
 for(j=0;j<n;j++)
    scanf("%d",&b[j]);
 for(i=0;i<m;i++)
    c[i]=a[i];
 for(j=m,i=0;j<m+n && i<n;j++,i++)
    c[j]=b[i];
 printf("\nArray elements : ");
 for(i=0;i<m+n;i++)
    printf("%d  ",c[i]);

 getch();
 }


