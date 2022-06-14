#include<stdio.h>
void main()
{
	int n,i=2;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			n=n/i;
		}

		else
			i++;
	}
}

