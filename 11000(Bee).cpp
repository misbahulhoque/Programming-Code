#include<stdio.h>

int main()
{
	__int64 n,male,total,fib[10001],female;
	__int64 i,j;
	fib[0]=0;
	fib[1]=1;
	fib[2]=1;
	for(i=3;i<10001;i++)
		fib[i]=fib[i-1]+fib[i-2];
	while(1)
	{
		scanf("%I64d",&n);
		if(n==-1)
			break;

		male=0;
		female=0;
		for(i=0;i<=n;i++)
		{
			male+=fib[i];
			female=fib[i+1];
		}
		total=male+female;
		printf("%I64d %I64d\n",male,total);
	}
	return 0;
}