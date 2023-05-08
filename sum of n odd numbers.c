#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum=0,i,n;
	printf("enter the limit to be the sum printed");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
	}
		printf("\nthe sum is =%d\n",sum);
		return 0;
}