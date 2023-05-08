#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	printf("1.porotta\n 2.bhiriyani\n 3.mandhi\n 4.chaya\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("you are selected porotta");
		break;
		case 2:
		printf("you are selected bhiriyani");
		break;
		case 3:
		printf("you are selected mandhi");
		break;
		case 4:
		printf("you are selected chaya");
		break;
		default:
		printf("select available choise or wisit other hotels");
		break;
	}
		return 0;
}