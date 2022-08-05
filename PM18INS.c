#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,temp,a[20],n;
  printf("How many elements : ");
  scanf("%d",&n);
  printf("Enter %d elements : ",n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  for(i=1;i<n;i++)
     {
       temp=a[i];
       j=i-1;
       while(j>=0 && temp<a[j])
          {
           a[j+1]=a[j];
           --j;
          }
       a[j+1]=temp;
     }
  printf("\nSorted array : ");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);
}