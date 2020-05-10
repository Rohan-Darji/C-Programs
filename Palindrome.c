#include<stdio.h>
int main()
{
	int n,revnum,r,ognum;
	printf("enter the number");
	scanf("%d",&n);
	ognum=n;
	while(n!=0)
	{
		r=n%10;
		revnum=revnum*10+r;
		n=n/10;
	}
	if(revnum==ognum)
	printf("The number is Palindrome");
	else
	printf("The number is not a Palindrome");
	return 0;
}
