#include<stdio.h>
int main()
{
	int a[100],n,k=0;
	a[0]=0,a[1]=1;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	for(k=0;k<2;k++)
	{
		printf("%d\n",a[k]);
	}
	for(k=2;k<n;k++)
	{
		a[k]=a[k-1]+a[k-2];
		printf("%d\n",a[k]);
	}
	return 0;
}
