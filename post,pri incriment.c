#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	b=++a;
	c=a++;
	printf("preincrement is %d",b);
	printf("\n post increment is%d",c);
	printf("\n%d",a);
	return 0;
}