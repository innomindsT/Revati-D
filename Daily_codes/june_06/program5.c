#include<stdio.h>
void main()
{
	int n,rem,temp,count=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		rem=temp%10;
		temp=temp/10;
		count++;
	}
	printf("count of digits :%d\n",count);
}
	
