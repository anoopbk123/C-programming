#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,temp;
    printf("enter the number a=");
    scanf("%d",&a);
    printf("enter the number b=");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
    return 0;
}
