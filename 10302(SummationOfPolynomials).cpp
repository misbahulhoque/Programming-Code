#include<stdio.h>

int main()
{
	long long int n,result;
	while((scanf("%lld",&n))!=EOF)
	{
		result=(n*(n+1))/2;
		result=result*result;
		printf("%lld\n",result);
	}
	return 0;
}