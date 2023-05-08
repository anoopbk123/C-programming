#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,num2,a,s,d;
	printf("enter the number");
	scanf("%d",&num);
	a=num%10;
	s=num-a;
	d=s/10;
	num2=(a*10)+d;
	if(num==num2)
	{
		printf("the number is a palindrom");
	}
	else
	{
		printf("the number is not a palindrom");
	}
	return 0;

}
