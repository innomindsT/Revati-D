#include<stdio.h>
void main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is even number\n",a);
	else
		printf("%d is odd number\n",a);
}

