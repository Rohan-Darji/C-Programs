#include<stdio.h>
int main()
{
	int n=1,ognum,arnum=0,r;
	while(n<=1000)
	{
	ognum=n;
	arnum=0;
	while(n!=0)
	{
		r=n%10;
		arnum=arnum+r*r*r;
		n=n/10;
	}
	if(arnum==ognum)
	{
		printf("%d\n",arnum);
	}
	n=ognum;
	n++;
	}
	return 0;
}
