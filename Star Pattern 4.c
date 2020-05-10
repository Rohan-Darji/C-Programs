#include<stdio.h>
int main()
{
	int i=1,j,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	while(i<=(2*n-1))
	{
		j=1;
		if(i<=n)
		{
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		}
		else
		{
			j=2*n-1;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
		}
	}
	return 0;
}
