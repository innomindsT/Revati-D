#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{
	int i,j,res;
	printf("enter two numbers:\n");
	scanf("%d%d",&i,&j);
	res=sum(i,j);
	printf("sum is:%d\n",res);
	res=sub(i,j);
	printf("sub is:%d\n",res);
	res=mul(i,j);
	printf("mul is:%d\n",res);
	res=div(i,j);
	printf("division is:%d\n",res);

}
int sum( int m, int n)
{
	return m+n;
}
int sub( int m, int n)
{
	return m-n;
}

int mul( int m, int n)
{
	return m*n;
}

int div( int m, int n)
{
	return m/n;
}


