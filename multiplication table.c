#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,p;
	printf("enter the number in which the multiplication table shold be displayed");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
		p=n*i;
		printf("%d",i);
		printf("x");
		printf("%d",n);
		printf("=");
		printf("%d",p);
		printf("\n");
	}
	return 0;
}