#include<stdio.h>
void main()
{
	int n,t1,t2,i,j;
	printf("enter a number:\n");
	scanf("%d",&n);
	printf("before flip:\n");
	for(i=31;i>=0;i--)
	{
		printf("%d ",n>>i&1);
	}
	for(i=31;i>=0;i--)
	{
		n=n^(1<<i);
	}

	printf("\nafterflip bit:\n");
	for(i=31;i>=0;i--)
	{
		printf("%d ",n>>i&1);
	}
}
