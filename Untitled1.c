#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int array2[5];
    int i,j,temp;
    for(i=1;i<5;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }


    }
    printf("%d",&array[1]);
    return 0;
}
