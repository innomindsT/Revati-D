#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a,b,res;
	char op;
	if(argc!=4)
	{
		printf("./a.out arguments...\n");
		return 0;
	}
	printf("arguments are:%d\n",argc);
	for(int i=1;i<argc;i++)
		printf("%s\n",argv[i]);
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	op=argv[2][0];
	switch(op)
	{
		case '+':res=a+b;
			 break;
		case '-':res=a-b;
			 break;
		case '*':res=a*b;
			 break;
		case'/':res=a/b;
			break;
	}
	printf("result is:%d\n",res);



}


