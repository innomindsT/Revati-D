#include<stdio.h>
void main()
{
	int a[10],b[10],n,i,j;
	a[1]=b[1]=1;
	printf("Enter a number of lines of pascal triangle:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
				b[j]=1;
				printf("%d ",b[j]);
			}
			else
			{
				b[j]=a[j-1]+a[j];
				printf("%d ",b[j]);
			}
		}
		for(j=1;j<=i;j++)
		{
			a[j]=b[j];
		}
		printf("\n");
	}
}
