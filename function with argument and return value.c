#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main()
{

    int c,a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("the rsult is%d",c);
    return 0;
}
int sum(int num1,int num2)
{
    int s;
    s=num1+num2;
    return s;
}
