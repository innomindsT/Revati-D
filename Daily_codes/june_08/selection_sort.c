#include<stdio.h>
void main()
	{
		int a[5],n,i,j,temp;
		n=sizeof(a)/sizeof(a[0]);
		printf("enter %d elements:\n",n);
		for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
		for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
					{
						if(a[i]>a[j])
							{
								temp=a[i];
								a[i]=a[j];
								a[j]=temp;
							}
					}
			}
	printf("sorted array is:\n");
	for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
