#include<stdio.h>
void main()
	{
		char a[20],temp;
		int i,j;
		printf("enter string:\n");
		scanf("%[^\n]",a);
		for(i=0;a[i];i++);
		for(i=i-1,j=0;i>j;i--,j++)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		printf("after reverse :%s\n",a);
	}
