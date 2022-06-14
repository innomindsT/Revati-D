#include<stdio.h>
void main()
{
	int temp,a=10,b=20;//local variable stored in stack section.
	printf("before swapping :a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping :a=%d,b=%d\n",a,b);	
}
