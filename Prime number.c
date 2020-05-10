#include<stdio.h>
int main()
{
	int n=1,i,r,rem=0,m=0;
	while(n<=1000)
	{
		rem=0;
		i=2;
	while(i<n)
	{
		r=n%i;
		if(r==0)
		{
			rem=rem+1;
			break;
		}
		i++;
	}
	if(rem==0 && n!=1)
	{
	printf("%d\t",n);
	m++;
	}
	n++;
}
	printf("\nThe total prime numbers are %d",m);
	return 0;
}
