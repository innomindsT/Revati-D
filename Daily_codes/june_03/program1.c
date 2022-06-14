#include<stdio.h>
void main()
{
	char s[20];
	int i;
	printf("enter string:\n");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++);
	printf("length of string=%d\n",i);
}
