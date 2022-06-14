#include<stdio.h>
void main()
	{
		char ch;
		printf("enter acharacter:\n");
		scanf("%c",&ch);
		if(ch>='a' && ch<='z')
			{
				printf("entered character is in lower letter\n");
			}
		if(ch>='A' && ch<='Z')
			{
				printf("entered character is in upper letter\n");
			}
	}

