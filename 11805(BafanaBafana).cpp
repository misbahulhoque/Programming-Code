#include<stdio.h>

int main()
{
	long int n,k,p,result,test,i;
	scanf("%ld",&test);
	for(i=1;i<=test;i++)
	{
		scanf("%ld%ld%ld",&n,&k,&p);
		result=(k+p)%n;
		if(result==0)
			printf("Case %ld: %ld\n",i,n);
		else
			printf("Case %ld: %ld\n",i,result);
	}
	return 0;
}