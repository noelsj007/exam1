#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,a[20],n,min,temp;
  printf("How many elements : ");
  scanf("%d",&n);
  printf("Enter %d elements : ",n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
    {
      min=i;
     for(j=i+1;j<n;j++)
        if(a[j]<a[min])
           min=j;      
           
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
       
    }
  printf("\nSorted array : ");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);
}