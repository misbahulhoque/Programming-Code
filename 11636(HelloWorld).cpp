#include<stdio.h>

int main()
{
	long int n,test,count,max;
	test=1;
	while(1)
	{
		scanf("%ld",&n);
		if(n<0)
			break;
		else if(n==1)
			printf("Case %ld: 0\n",test);
		else
		{
			count=1;
			max=2;
			while(max<n)
			{
				max=max*2;
				count++;
			}
			printf("Case %ld: %ld\n",test,count);
		}
		test++;
	}
	return 0;

}