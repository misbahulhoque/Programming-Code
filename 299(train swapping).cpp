#include<stdio.h>

int main()
{
long int t,n,i,j,k,test,num[1000],count;
scanf("%ld",&test);
for(t=1;t<=test;t++)
	{
	count=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%ld",&num[i]);
	for(i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
			{
			if(num[j]<num[i])
				{
				k=num[i];
				num[i]=num[j];
				num[j]=k;
				count++;
				}
			}
		}
	printf("Optimal train swapping takes %ld swaps.\n",count);
	}
return 0;
}
