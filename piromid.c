#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,i,j;
	printf("enter the row limit");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=0;j<i;j++)
		{
				printf("*");
		  	
		}
		printf("\n");
	
		
	}
	return 0;
}