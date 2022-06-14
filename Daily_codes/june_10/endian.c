#include<stdio.h>
void main()
{
	int x=1;
	char *p=&x;
	if(*p==1)
	{
		printf("Little endian\n");
	}
	else
	{
		printf("Big endian\n");
	}
}

