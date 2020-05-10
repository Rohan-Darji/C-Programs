#include<stdio.h>
int main()
{
	int n=5,i,j,t,a[5]={3,8,5,1,6};
	printf("Sorted array is : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
