#include<stdio.h>
#include<string.h>

int main()
{
	long int m,n,i,len;
	char num[1001];
	while(scanf("%s",num))
	{
		if(strcmp(num,"0")==0)
			break;
		n=num[0]-'0';
		m=1;
		len=strlen(num);
		for(i=1;i<len;i++)
		{
			n=(n*10)+(num[i]-'0');
			n=n%11;
		}
		if(n==0)
			printf("%s is a multiple of 11.\n",num);
		else
			printf("%s is not a multiple of 11.\n",num);

	}

	return 0;
}