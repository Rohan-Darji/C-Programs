#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],i,j,k,n,m;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(m=0;m<n;m++)
	{
		scanf("%d",&a[m]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[k]+a[j]==-a[i])
				{
					break;
				}
			}
			if(a[k]+a[j]==-a[i])
			{
				break;
			}
		}
		if(a[k]+a[j]==-a[i])
		{
			printf("\nThe triplet is %d,%d,%d",a[i],a[j],a[k]);
			if(k==(n-1))
			{
				break;
			}
		}
	}
	return 0;
}
