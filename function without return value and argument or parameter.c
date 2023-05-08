#include<stdio.h>
#include<stdlib.h>
void sum();
int main()
{
    sum();
    sum();
    return 0;
}
void sum()
{
    int a,b,sum;
    printf("\nenter two valus\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\nthe sum is%d\n",sum);
}
