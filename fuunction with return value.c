#include<stdio.h>
#include<stdlib.h>
int sum();
int main()
{
    int s;
    s=sum();
    printf("the result is%d",s);
    return 0;
}
int sum()
{
    int a,b,sum;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}
