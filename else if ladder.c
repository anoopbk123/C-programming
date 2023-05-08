#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1,num2,sum,product,difference,choice;
	float division;
	printf("enter any two numbers");
	scanf("%d%d",&num1,&num2);
	printf("select any of the following optinos 1.addition \n 2.multiplication \n 3.substraction \n 4.division \n");
 scanf("%d",&choice);
 if(choice==1)
 {
 	sum=num1+num2;
 	printf("the sum is=%d",sum);
 }
 else if(choice==2)
 {
 	product=num1*num2;
 	printf("the product is=%d",product);
 }
 else if(choice==3)
 {
 	difference=num1-num2;
 	printf("the difference is=%d",difference);
 }
 else if(choice==4)
 {
 	division=num1/num2;
 	printf("the value of division is=%f",division);
 }
 else
 {
 	printf("select the correct choice");
 }
 return 0;
}