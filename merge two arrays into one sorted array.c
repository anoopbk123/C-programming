#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,m,n,o,a[100],b[100],s[200],temp,p,k,t;
	setbuf(stdout,NULL);
	printf("enter the number of elements in the 1st array");
	scanf("%d",&m);
	printf("enter the elements in the 1st array");
	for(i=0;i<m;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("enter the number of elements in the 2nd array");
	scanf("%d",&n);
	printf("enter the elements in the second array");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	o=m+n;
	for(i=0;i<m;i++)
	{
		s[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		s[m+i]=b[i];
	}
	for(p=0;p<o-1;p++)
	{
		for(t=p+1;t<o;t++)
		{
			if(s[p]>s[t])
			{
				temp=s[p];
				s[p]=s[t];
				s[t]=temp;

			}
		}
	}
	printf("the sorted array is");
	for(k=0;k<o;k++)
	{
		printf("\n%d",s[k]);
	}

	return 0;
}

