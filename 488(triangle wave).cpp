#include<stdio.h>

int main()
{
	long int i,j,k,m,n,c,l;
	scanf("%ld",&c);
	for(l=1;l<=c;l++)
	{
		scanf("%ld %ld",&n,&m);
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				for(k=1;k<=j;k++)
					printf("%ld",j);
				printf("\n");
			}
			for(j=n-1;j>0;j--)
			{
				for(k=1;k<=j;k++)
					printf("%ld",j);
				printf("\n");
			}
			if(i!=m)
				printf("\n");
		}
		if(l<c)
			printf("\n");
	}
	return 0;
}