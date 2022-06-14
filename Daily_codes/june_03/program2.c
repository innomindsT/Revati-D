#include<stdio.h>
void main()
{
	int a,i,count=0;
	printf("enter a number:\n");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count==0)
	printf("%d is prime number\n",a);
	else
	printf("%d is not prime number\n",a);
}

