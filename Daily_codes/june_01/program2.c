#include<stdio.h>
void main()
{
	int a,b,op,res;
	printf("enter a and b value:\n");
	scanf("%d%d",&a,&b);
	printf("enter choice of user 1.add 2.sub 3.mul 4.div:\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:	res=a+b;
			printf("result:%d\n",res);
			break;
		case 2: res=a-b;
			printf("result:%d\n",res);
			break;
		case 3: res=a*b;
			printf("result:%d\n",res);
			break;
		case 4: res=a/b;
			printf("result:%d\n",res);
			break;

	}
}
