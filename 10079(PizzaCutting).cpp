#include<stdio.h>

int main()
{
	long int n,result,a;
 	while(scanf("%lld",&n))
	{
		if(n<0)
			break;
		if(n%2==0)
		{
			a=n/2;
			result=(n+1)*a+1;
		}
		else
		{
			a=n/2;
			result=((n+1)*a)+a+2;
		 }
		printf("%ld\n",result);
	}
	return 0;	
}

