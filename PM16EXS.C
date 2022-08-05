#include<stdio.h>
#include<conio.h>
void main()
{
int temp,a[20],n,i,j;
printf("Emter number of elements:");
scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
  }
}
printf("Sorted array :");
for(i=0;i<n;i++)
  printf("%d  ",a[i]);
getch();
}
    


