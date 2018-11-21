#include<stdio.h>
#include<string.h>

int main()
{
	long int i,len;
	char str[500];
	while(gets(str))
	{
		if(strcmp(str,"EOF")==0)
			break;
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			str[i]=str[i]-7;
		}
		printf("%s\n",str);
	}
	return 0;
}