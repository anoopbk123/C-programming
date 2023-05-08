#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count,i,sum=0,a[100];
	printf("enteer the count of numbers to be added");
	scanf("%d",&count);
	printf("enter the numbers");
	for(i=0;i<count;i++)
	{
	   scanf("%d",&a[i]); 
		
	}
	for(i=0;i<count;i++)
	{
		sum=sum+a[i];
	}
	printf("\nthe sum is=%d\n",sum);
	return 0;
}