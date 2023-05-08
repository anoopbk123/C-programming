#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,num3;
    printf("enter an three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<num2)
    {
        if(num2<num3)
        {
            printf("the greatest number is: %d",num3);
        }
        else
        {
            printf("the greatest number is: %d",num2);

        }
    }
    else
    {
        if(num1<num3)
        {
            printf("the greatest number is: %d",num3);
        }
        else
        {
            printf("the greatest number is: %d",num1);
        }
    }
    return 0;
}
