#include<stdio.h>

long int gcd(long int i,long int j);

int main()
{
	long int i,j,n,g;
	while(1)
	{
		scanf("%ld",&n);
		if(n==0)
			break;
		g=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				g=g+gcd(i,j);
			}
		}
		printf("%ld\n",g);
	}
	return 0;
}

long int gcd(long int i,long int j)
{
	long int a;
	while((a=i%j)!=0)
	{
		i=j;
		j=a;
	}
	return j;

}
