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
			printf("%c",'A',j);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
