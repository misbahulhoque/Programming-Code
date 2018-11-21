#include<stdio.h>

long int num_flag[999983],prime_list[78499];

int main()
{
	long int i,k,m,number;
	for(i=0;i<999983;i++)
		num_flag[i]=0;
	num_flag[0]=1;
	num_flag[1]=1;
	
	number=2;
	k=0;
	while(number<=999983)
	{
		if(num_flag[number]!=0)
		{
			number++;
			continue;
		}
		else if(num_flag[number]==0)
		{
			prime_list[k]=number;
			k++;
			m=2*number;
			while(m<999983)
			{
				if(num_flag[m]!=1)
					num_flag[m]=1;
				m=m+number;
			}
		}
		number++;
	}

	long int p,n,x;
	long int j;

	while(1)
	{
		scanf("%ld",&n);
		if(n==0)
			break;
		for(i=0;i<k;i++)
		{
			if(prime_list[i]<=n)
				x=i;
			else
				break;
		}
		long int t=0,prime_sum;
		p=0;
		for(i=0;i<x;i++)
		{
			for(j=x;j>=0;j--)
			{
				prime_sum=prime_list[i]+prime_list[j];
				if(prime_sum==n)
				{
					t=1;
					p++;
					printf("%ld = %ld + %ld\n",n,prime_list[i],prime_list[j]);
					break;
				}
				else if(prime_sum<n)
					break;
			}
			if(t==1)
				break;
		}
		if(t==0)
			printf("Goldbach's conjecture is wrong.\n");
		
	}
	return 0;
}
