#include<stdio.h>
#include<math.h>
int main()
{
	int col,space,row,n=1,i;
	printf("Enter the number of rows: ");
	scanf("%d",&i);
	for(row=0;row<i;row++)
	{
		for(space=1;space<=(i-row);space++)
		{
			printf(" ");
		}
		for(col=0;col<=row;col++)
		{
			if(col==0 || row==0)
			n=1;
			else
			n=n*(row-col+1)/col;
			printf(" %d",n);
		}
		printf("\n");
	}
	return 0;
}
