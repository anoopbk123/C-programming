#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf("enter the number of rows");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}printf("the exicution is finished please get back to the main screen\n");
	return 0;
}
