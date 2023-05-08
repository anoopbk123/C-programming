#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,n1=0,n2=1,n3;
    printf("enter the limit");
    scanf("%d",&n);
    printf("%d,%d",n1,n2);
    for(i=0;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(",%d",n3);
    }
    return 0;

}
