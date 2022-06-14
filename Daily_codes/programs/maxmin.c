#include<stdio.h>
void  main()
{
	int a[20],max,min,n,i;
	printf("enter n number:\n");
	scanf("%d",&n);
	printf("enter %d elements in array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}

	printf("Maximum element in array is:%d\n Minimum element in array is:%d\n",max,min);
}
