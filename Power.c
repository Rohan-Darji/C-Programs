#include<stdio.h>
#include<math.h>
int main()
{
	int r=1,x,y;
	printf("Enter the values of x and y respectively: ");
	scanf("%d%d",&x,&y);
	while(y!=0)
	{
		r=r*x;
		--y;
	}
	printf("the value is %d",r);
	return 0;
}
