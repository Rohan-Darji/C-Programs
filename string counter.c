#include<stdio.h>
#include<string.h>
int main()
{
	char a[30]="helloworld";
	int i,j;
	int count[26]={0};
	for (i=0;i<strlen(a);i++)
	{
		int k=a[i]-'a';
		count[k]++;
	}
	for (j=0;j<26;j++)
	{
		printf("%c = ",('a'+j));
		printf("%d\n",count[j]);
	}
	return 0;
}
