#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int i,t,count;
	char str[1000];
	while(gets(str))
	{
		t=strlen(str);
		count=0;
		for(i=0;i<=t;i++)
		{
			if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
			{
				if(str[i+1]==' ')
				{
					count++;
					continue;
				}
				if(str[i+1]=='\n')
				{
					count++;
					continue;
				}
				if((str[i+1]<'a' && str[i+1]>'Z'))
				{
					count++;
					continue;
				}
				if(str[i+1]<'A')
				{
					count++;
					continue;
				}
				if(str[i+1]>'z')
				{
					count++;
					continue;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}