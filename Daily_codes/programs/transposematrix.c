#include<stdio.h>
void main()
{
	int a[5][5],trans[5][5],i,j,r,c;
	printf("Enter row and column value:\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix for %d rows and %d columns\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("transpose  matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}

