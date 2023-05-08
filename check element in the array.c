#include<stdio.h>
#include<stdlib.h>
int main()
{
	int element,i,a[10]={23,4,5,445,56,87,25,65,86,341},flaag=0;
	printf("enter the number you want to check");
	scanf("%d",&element);
	for(i=0;i<10;i++)
	{
		if(a[i]==element)
		{   flaag=1;
			printf("it is an element of the array 'a' and its position is:%d\n",i+1);
			break;
		}
		
	}
	if(flaag==0)
	{
		printf("the value is not an element of the array 'a'\n");
	}
	return 0;
}