#include<stdio.h>
#include<stdlib.h>
int getArray();
void displayArray(int);
int main()
{
    int s,i,a[100],value;
    printf("enter the array size");
    scanf("%d",&s);
    printf("\nenter array elements");
    for(i=0;i<s;i++)
    {
    a[i]=getArray();
    }
    printf("\n the array is");
    for(i=0;i<s;i++)
    {
        value=a[i];
        displayArray(value);
    }
    return 0;
}
int getArray()
{
    int value;
    scanf("%d",&value);
    return value;

}
void displayArray(int value)
{
    printf("\t%d",value);

}
