#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,count,x,result;
	char c,d;
	char s[100];
	count=0;
	while((scanf("%d%c%d%c%s",&a,&c,&b,&d,s))!=EOF)
	{		
		if(s[0]=='?')
			continue;
		x=atoi(s);
		if(c=='+')
		{
			result=a+b;
			if(result==x)
				count++;
		}
		else if(c=='-')
		{
			result=a-b;
			if(result==x)
				count++;
		}
	}
	printf("%d\n",count);
	return 0;
}