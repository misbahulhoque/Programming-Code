#include<stdio.h>

int main()
{
	long int t,test,n,wall[1000],high,low,i;
	scanf("%ld",&test);
	for(t=1;t<=test;t++)
	{
		high=0;
		low=0;
		scanf("%ld",&n);
		for(i=1;i<=n;i++)
			scanf("%ld",&wall[i]);
		if(n==1)
		{
			low=0;
			high=0;
		}
		else
		{
			for(i=1;i<n;i++)
			{
				if(wall[i]>wall[i+1])
					low++;
				else if(wall[i]<wall[i+1])
					high++;
			}
		}
		printf("Case %ld: %ld %ld\n",t,high,low);
	}
	return 0;
}