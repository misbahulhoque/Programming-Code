#include<stdio.h>

int main()
{
	long int n,edge,i,j;
	while(1)
	{
		scanf("%ld",&n);
		if(n==0)
			break;
		if(n<=2 || n%2==1)
			printf("Impossible\n");
		else
		{
			edge=n/2+n;
			printf("%ld\n",edge);

			for(i=1;i<n;i++)
				printf("%ld %ld\n",i,i+1);
			j=n;
			for(i=2;i<=n/2;i++)
			{
				printf("%ld %ld\n",i,j);
				j--;
			}
			printf("1 %ld\n",n);
			printf("1 %ld\n",1+n/2);
		}
	}
	return 0;
}