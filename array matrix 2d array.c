#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,m,n,a[100][100];
    printf("enter the number of raws");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);
    printf("enter matrix elements");
    for(i=0;i<m;i++)
    {
        printf("enter the raw%d",i);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe entered matrix is as follows\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
