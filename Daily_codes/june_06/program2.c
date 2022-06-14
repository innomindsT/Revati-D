#include<stdio.h>
void main()
	{
		char a[20],b[20];
		int i;
		printf("enter a string:\n");
		scanf("%[^\n]",a);
		for(i=0;a[i];i++)
		{
			b[i]=a[i];
		}
		b[i]='\0';
		printf("string b is :%s\n",b);
	}
