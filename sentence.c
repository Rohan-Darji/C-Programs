#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],w[100],t[100],d[100];
	int i,j=0,k,count=0;
	printf("Enter the sentence: ");
	gets(s);
	printf("Enter the word to be deleted: ");
	gets(w);
	i=0;
	while(s[i]!='\0')
	{
		j=0;
		while(1)
		{
			if(s[1]==' ' || s[i]=='\0')
			break;
			w[j++]=s[i++];
		}
		w[j]='\0';
		if(strcmp(w,d)!=0)
		{
			strcat(t,w);
			strcat(t," ");
		}
		if(s[i]!='\0')
		i++;
	}
	printf("\n After deletion the sentence is:\n ");
	puts(t);
	return 0;
}
