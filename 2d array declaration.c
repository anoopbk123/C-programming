#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[3][2]={{1,2},{3,4},{5,6}};
    printf("\nthe matrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
