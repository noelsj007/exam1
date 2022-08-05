#include <stdio.h>

void main()
{
int f,l,mid,n,a[20];
printf("Enter no of elements :");
scanf("%d",&n);
printf("Enter %d elements : ");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
printf("Enter element to search ");
scanf("%d",&search);
 f=0,l=n-1,mid=(f+l)/2;
 while(f<l)
 {
  if(a[mid]==search)
  {
  printf("Element found at %d ",mid+1);
  break;
  }
  else if(a[mid]<search)
       f=mid+1;
  else 
       l=mid-1;
  mid=(f+l)/2;
  }
  if(f>l)
     printf("Element not found ");
 getch();
 }
    
  