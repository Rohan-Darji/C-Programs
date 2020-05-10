#include<stdio.h>
int main()
{
	int i=1,j;
	while(i<4)
	{
		j=2*i-1;
		while(j>0)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}
