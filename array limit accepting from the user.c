#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,limit,a[100];
	printf("enter the limit of the array");
	scanf("%d",&limit);
	printf("\nenter the array elements");
	for(i=0;i<limit;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe array elements are:");
	for(i=0;i<limit;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}