#include<stdio.h>
int main()
{
	int n,r=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>=1)
	{
		r=r*n;
		n--;
	}
	printf("Factorial is %d",r);
	return 0;
}
