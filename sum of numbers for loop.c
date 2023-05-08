#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
		
	}
	printf("\n%d%\n",sum);
	return 0;
}