#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,a[5]={7,5,5,8,18};
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n5th element of array %d\n",a[4]);
	return 0;
}