#include<stdio.h>
#include<string.h>

char str[1000001];

int main()
{
	long int a,b,n,i,j,len,test=1;
	while(1)
	{
		long int max,min;
		strcpy(str,"");
		scanf("%s",str);
		if(strcmp(str,"EOF")==0)
			break;
		if(strcmp(str,"")==0)
			break;
		len=strlen(str);
		scanf("%ld",&n);
		for(a=1;a<=n;a++)
		{
			if(a==1)
				printf("Case %ld:\n",test);
			scanf("%ld %ld",&i,&j);
			if(i>j)
			{
				max=i;
				min=j;
			}
			else
			{
				max=j;
				min=i;
			}
			char c=str[min];
			int flag=1;
			for(b=min+1;b<=max;b++)
			{
				if(str[b]!=c)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
				printf("Yes\n");
			else
				printf("No\n");
		}
	test++;
	}
	return 0;
}