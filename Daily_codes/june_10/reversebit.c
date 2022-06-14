#include<stdio.h>
void main()
{
	int a[5],n,i,j,temp;
	n=sizeof(a)/sizeof(a[0]);
	printf("enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1,j=0;i>j;i--,j++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("after reverse array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

