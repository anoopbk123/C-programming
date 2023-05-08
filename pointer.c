#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=5;
    int *p;
    p=&num;
    printf("the address of num is %d",p);
    printf("\nthe value of num is %d",*p);
    return 0;
}
