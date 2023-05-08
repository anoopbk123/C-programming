#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,flaag=1;
    char str[100];
    printf("\nenter the string");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            flaag=0;
            break;
        }
    }
    if(flaag==1)
    {
        printf("\tit is  palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
    return 0;
}
