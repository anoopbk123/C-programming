#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,n;
    float a,sum=0,avg;
    printf("enter the number of numbers");
    scanf("%d",&n);
    printf("enter the numbers");
    do
    {
        scanf("%f",&a);
        sum=sum+a;
        i++;
    }
    while(i<n);
    avg=sum/n;
    printf("the avarage is %f",avg);
    return 0;
}
