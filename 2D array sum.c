#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,m,n,a[100][100],b[100][100],s[100][100];
    printf("enter the number of raws");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);
    printf("enter the elements in the array\a");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the elements in the array\b");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("the sum of th arrays is");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
