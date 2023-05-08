#include<stdio.h>
#include<stdlib.h>
void sum(int,int);
void division(int,int);
void multiplication(int,int);
int main()
{
    int a,b,choice;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\nenter your choice\n 1.sum\n2.division\n3.multiplication\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        sum(a,b);
    }
    else if(choice==2)
    {
        division(a,b);
    }
    else if(choice==3)
    {
        multiplication(a,b);
    }
    else
    {
        printf("wrong choice");
    }
    return 0;
}
void sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    printf("\nthe result is\t%d",sum);
}
void division(int num1,int num2)
{
    float d;
    d=num1/num2;
    printf("the result is\t%f",d);
}
void multiplication(int num1,int num2)
{
    int m;
    m=num1*num2;
    printf("the resullt is\t%d",m);
}
