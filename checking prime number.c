#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,flag=0;
	printf("enter a numer");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nthe number is prime number");
	}
	if(flag==1)
	{
		printf("\nthe number is not a prime number");
	}
		return 0;
		
	}
	
