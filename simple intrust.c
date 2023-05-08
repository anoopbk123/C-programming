#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p;
    float n,r,si;
    printf("enter the principle amount");
    scanf("%d",&p);
    printf("enter the intrust rate");
    scanf("%f",&r);
    printf("enter the number of years");
    scanf("%f",&n);
    si=(p*n*r)/100;
    printf("the simple intrust is=%f",si);
    return 0;
}
