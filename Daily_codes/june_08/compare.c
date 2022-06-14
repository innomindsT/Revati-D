#include<stdio.h>
int strcompare(char *,char*);
void main()
	{
		char a[20],b[20];
		int i,c;
		printf("enter two strings:\n");
		scanf("%s",a);
		printf("Enter second\n");
		scanf("%s",b);
		c=strcompare(a,b);
		if(c==0)
		{
			printf("strings are equal\n");
		}
		else
		{
			printf("strings are not equal\n");
		}
	}
	int strcompare(char *a,char *b)
	{
		int i;
		for(i=0;a[i];i++)
			{
				if(a[i]!=b[i])
				{
					break;
				}
			}
		if(a[i]==b[i])
		{
			return 0;
		}
		else if(a[i]<b[i])
		{
			return -1;
		}
		else return 1;
	}

