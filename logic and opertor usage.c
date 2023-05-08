#include<stdio.h>
#include<stdlib.h>
int main()
{
	int mark;
	setbuf(stdout,NULL);
	printf("enter your mark");
	scanf("%d",&mark);
	if(mark>=80&&mark<=100)
	{
		printf("your grade is A");
	}
	else if(mark<=79&&mark&&mark>=60)
	{
		printf("your grade is B");
	}
	else if(mark<=59&&mark>=40)
	{
		printf("your grade is C");
	}
	else if(mark<=39)
	{
		printf("your grade is D");
	}
	else
	{
		printf("enter the correct mark");
	}
	return 0;
}
