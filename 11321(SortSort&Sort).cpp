#include<stdio.h>
#include<stdlib.h>

void sort(long int n);

long int n,num[10001],mod[10001],result[10001],even[10001];

int main()
{
	long int m,i,j;
	while(1)
	{
		scanf("%ld%ld",&n,&m);
		if(n==0 && m==0)
			break;
		for(i=0;i<n;i++)
			scanf("%ld",&num[i]);
		sort(n);
		for(i=0;i<n;i++)
		{
			if(num[i]<0)
			{
				long int str=-1*num[i];
				str=str%m;
				str=-1*str;
				mod[i]=str;
			}
			else
				mod[i]=num[i]%m;
		}
		long int p=-1*(m-1);
		long int t=0;
		while(p<=m-1)
		{
			long int k=0;
			for(i=0;i<n;i++)
			{
				if(p==mod[i])
				{
					if(num[i]%2!=0)
					{
						result[t]=num[i];
						t++;
					}
					else
					{
						even[k]=num[i];
						k++;
					}
				}
			}
			k--;
			for(j=k;j>=0;j--)
			{
				result[t]=even[j];
				t++;
			}
			p++;
		}
		printf("%ld %ld\n",n,m);
		for(i=0;i<n;i++)
			printf("%ld\n",result[i]);
	}
	printf("0 0\n");
	return 0;
}

void sort(long int n)
{
	int i,k,j,temp;
	for(i=0;i<n;i++)
	{
		j=i;
		for(k=i+1;k<n;k++)
			if(num[k]>num[j])
				j=k;
		temp=num[i];
		num[i]=num[j];
		num[j]=temp;
	}
	
}