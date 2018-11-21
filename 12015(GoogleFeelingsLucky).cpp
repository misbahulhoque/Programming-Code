#include<stdio.h>
#include<string.h>

int main()
{
	long int test,i,j,max;
	char str[11][101];
	scanf("%ld",&test);
	for(i=1;i<=test;i++)
	{
		long int pr[11];
		max=-99;
		for(j=0;j<10;j++)
		{
			scanf("%s %ld",str[j],&pr[j]);
			if(pr[j]>max)
				max=pr[j];
		}
		printf("Case #%ld:\n",i);
		for(j=0;j<10;j++)
		{
			if(max==pr[j])
				printf("%s\n",str[j]);
		}
	}
	return 0;
}