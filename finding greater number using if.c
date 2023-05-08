#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2;
    printf("enter any two numbers");
    scanf("%d%d",&num1,&num2);
    if(num1<num2)
    {
        printf("the greater number is: %d",num2);
    }
    else{printf("the greater number is: %d",num1);
    }
    return 0;
}
