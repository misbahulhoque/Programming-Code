#include<stdio.h>

int main()
{
	long long int test,m,n;
	scanf("%lld",&test);
	while(test!=0)
	{
		scanf("%lld %lld",&m,&n);
		if(m>n)
			printf(">\n");
		else if(m==n)
			printf("=\n");
		else if(m<n)
			printf("<\n");
		test--;
	}
	return 0;
}
	