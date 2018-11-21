#include<stdio.h>

int main()
{
	long int t,i,n1,n2,j;
	unsigned long int sum;
	scanf("%ld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%ld %ld",&n1,&n2);
		if(n1%2!=0)
		{
			sum=0;
			for(j=n1;j<=n2;j=j+2)
				sum=sum+j;
		}
		else if(n1%2==0)
		{
			sum=0;
			for(j=n1+1;j<=n2;j=j+2)
				sum=sum+j;
		}
		printf("Case %ld: %lu\n",i,sum);
	}
	return 0;
}