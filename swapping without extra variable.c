#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=4,b=6;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d",a);
    printf("b=%d",b);
    return 0;
}
