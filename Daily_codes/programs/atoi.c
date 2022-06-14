#include<stdio.h>
int my_atoi(char*);
int main(int argc,char *argv[])
{
	if(argc !=2)
	{
		printf("./a.out string\n");
		return;
	}
	int ret;
	ret=my_atoi(argv[1]);
	printf("n=%d\n",ret);
	return 0;
}
int my_atoi(char *p)
{
	int i=0,n=0;
	if(p[0]=='-')
	{
		i=1;
	}
	for(;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			n=n*10+(p[i]-48);
		}
		else 
			break;
	}
	if(p[0]=='-')
		n=-n;
	return n;
}


