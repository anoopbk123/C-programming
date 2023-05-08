#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,n,a[100],temp;
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the elements of the array");
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

    }
  printf("the array elements are");
  for(i=0;i<n;i++)
    {
      printf("\n%d",a[i]);
    }
  printf("the sorted array is");
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
   for(i=0;i<n;i++)
     {
       printf("\n%d",a[i]);
     }

return 0;

}
