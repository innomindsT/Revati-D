#include<stdio.h>
void main()
{
	char s[20];
	int i,count=0;
	printf("enter string:\n");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
	{
		count++;
	}
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			count--;
		}
	}
	printf("string length is:%d\n",count);
}


