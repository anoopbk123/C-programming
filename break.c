#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n%d",i);
		if(i==5)
		{
			break;
		}
	}
	printf("\nfinshed\n");
	return 0;
	
}

