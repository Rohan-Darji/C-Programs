#include<string.h>
#include<stdio.h>
int main()
{
	char str1[30];
	char str2[30];
	printf("Enter the string: ");
	gets(str1);
	strcpy(str2,str1);
	int i=0,strlen;
	strlen(str2);
	while(i<strlen)
	{
		if(str2[i]>='A' && str2[i]<='Z')
		str2[i] += 'a'-'A';
		else if(str2[i]>='a' && str2[i]<='z')
		str2[i] += 'A'-'a';
		i++;
	}
	printf("The output is: %s",str2);
	return 0;
}
