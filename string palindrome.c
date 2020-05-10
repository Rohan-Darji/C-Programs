#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int beg,mid,length=0,end; 
	printf("Enter the string: ");
	gets(a);
	length=strlen(a);
	mid=length/2;
	end=length-1;
	for(beg=0;beg<mid;beg++)
	{
		if(a[beg]==a[end])
		{
			printf("String is palindrome");
			break;
		}
		if(a[beg]!=a[end])
		{
			printf("String is not a palindrome");
			break;
		}
	}
	return 0;
}

