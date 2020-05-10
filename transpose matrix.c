#include<stdio.h>
int main()
{
	int a[3][3],transp[3][3];
	int i,j,k,row,col;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the values [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Entered matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			transp[j][i]=a[i][j];
		}
	}
	printf("transpose of matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",transp[i][j]);
		}
		printf("\n");
	}
	return 0;
}
