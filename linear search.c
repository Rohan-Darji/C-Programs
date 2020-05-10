#include<stdio.h>
int main()
{
	int a[30],found,n,i,low=0,high,mid,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	if(n>30)
	{
		printf("\n Too many numbers");
		exit(0);
	}
	printf("Array elements in the ascending order: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&k);
	high=n-1;
	low=0;
	while(high>=low)
	{
	mid=(high+low)/2;
	if(a[mid]==k)
	{
		found=1;
		break;
	}
	else if(k<a[mid])
	{
		high=mid-1;
	}
	else
	{
		low=mid+1;
	}
	}
	if(found==0)
	printf("\n NOT FOUND");
	else
	printf("\n Found at %d",mid);
	return 0;
}

