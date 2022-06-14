#include<stdio.h>
int LCM(int,int);
void main()
{
	int a,b,c,d,e,l,m,n,o;
	printf("enter five numbers:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b)
		l=LCM(a,b);
	else
		l=LCM(b,a);
	if(l>c)
		m=LCM(l,c);
	else
		m=LCM(c,l);
	if(m>d)
		n=LCM(m,d);
	else
		n=LCM(d,m);
	if(n>e)
		o=LCM(n,e);
	else
		o=LCM(e,n);
	printf("lcm of %d,%d,%d,%d,%d is %d",a,b,c,d,e,o);
}
int LCM(int a,int b)
{
	int max=a;
	while(1)
	{
		if(max%a==0 && max%b==0)
		{
			break;
		}
	max++;
	}
	return max;
}


