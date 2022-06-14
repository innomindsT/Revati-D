#include<stdio.h>
void main()
{
	int a[10],b[20],n1,n2,i,j,merged[30],*p1,*p2;
	printf("enter n size:\n");
	scanf("%d",&n1);
	printf("enter elements in array:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
		//merged[i]=a[i];
	}
	//k=i;
	printf("enter n size:\n");
	scanf("%d",&n2);
	printf("enter elements in array:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	//	merged[k]=b[i];
	//	k++;
	}
	p1=a;
	p2=b;
	for(i=0;i<n1;i++)
		merged[i]=*(p1+i);
//	k=i;
	for(j=0;i<n1+n2;i++,j++)
		merged[i]=*(p2+j);

	printf("new array is:\n");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d ",merged[i]);
	}
}

