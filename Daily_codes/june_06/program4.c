#include<stdio.h>
void main()
{
	int n,rem,rev=0,temp;
	printf("enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	printf("reverse number is :%d\n",rev);
}
	
