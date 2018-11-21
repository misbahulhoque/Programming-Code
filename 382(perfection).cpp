#include<stdio.h>

int main()
{
long int i,n,sum;
long int k=0;
while((scanf("%ld",&n))!=EOF)
	{
	if(k==0)
		printf("PERFECTION OUTPUT\n");
	if(n==0)
		{
		printf("END OF OUTPUT\n");
		break;
		}
	sum=0;
	for(i=1;i<=n/2;i++)
		{
		if(n%i==0)
			sum=sum+i;
		}
	if(sum==n)
		printf("%5ld  PERFECT\n",n);
	else if(sum>n)
		printf("%5ld  ABUNDANT\n",n);
	else
		printf("%5ld  DEFICIENT\n",n);
	k++;
	}
return 0;
}