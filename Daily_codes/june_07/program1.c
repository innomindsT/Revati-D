#include<stdio.h>
void main()
	{
		char a[20],b[20];
		int i;
		printf("enter string1:\n");
		scanf("%[^\n]",a);
		printf("enter string2:\n");
		scanf(" %[^\n]",b);
		for(i=0;a[i];i++)
			{
				if(a[i]!=b[i])
					{
						break;
					}
			}
		if(a[i]==b[i])
			{
				printf("strings are equal\n");
			}
		else
			{
				printf("strings are not equal\n");
			}
	}


