#include<stdio.h>
void main()
{
	char s[20],temp;
	int i,j;
	printf("enter a string:\n");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++);
	for(i=i-1,j=0;i>j;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("reverse string is:%s\n",s);
}

