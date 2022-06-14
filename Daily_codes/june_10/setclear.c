#include<stdio.h>
void main()
{
	int n,bp,ch;
	printf("enter a number and bitposition you want to set or clear:\n");
	scanf("%d%d",&n,&bp);
	printf("enter a choice 1.set 2.clear\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		n=n|(1<<bp);
		printf("After setting %d bit number is:%d.\n",bp,n);
	}
	else if(ch==2)
	{
		n=n&~(1<<bp);
		printf("After clearing %d bit number is:%d.\n",bp,n);
	}
	else
	{
		printf("Invalid choice\n");
	}
}


