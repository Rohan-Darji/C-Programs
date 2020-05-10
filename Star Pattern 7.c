#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=n;
		while(j>i)
		{
			printf(" ");
			j--;
		}
		j=0;
		while(j<i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
