#include<stdio.h>

int main()
{
	long int n,k,total;
	while(scanf("%ld %ld",&n,&k)!=EOF)
	{
		total=n;
		while(n>=k)
		{
			total=total+n/k;
			n=n/k+n%k;
		}
		printf("%ld\n",total);
	}
	return 0;
}