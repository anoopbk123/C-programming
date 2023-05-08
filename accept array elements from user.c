#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		printf("\nenter the %d ",i);
		printf("element in array\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d\n",a[i]);
	}
	return 0;
}
