#include<stdio.h>
void main()
	{
		char s[20],ch;
		int i,count=0;
		printf("enter string:\n");
		scanf("%s",s);
		printf("enter a character :\n");
		scanf(" %c",&ch);
		for(i=0;s[i];i++)
			{
				if(s[i]==ch)
					{
						count++;
					}
			}
		printf("%c character count in string is:%d\n",ch,count);
	}
