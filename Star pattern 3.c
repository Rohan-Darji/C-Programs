#include<stdio.h>
int main()
{
	int i=1,j,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	i=1;
	while(i<=n-1)
	{
		j=n-1;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
