#include<stdio.h>

void selectionsort(long int n);
long int br[1000],act[1000];

int main()
{
	long int i,n,j,t,time,max;
	t=1;
	while(1)
	{
		scanf("%ld",&n);
		max=0;
		if(n==0)
			break;
		for(i=1;i<=n;i++)
			scanf("%ld %ld",&br[i],&act[i]);
		selectionsort(n);
		time=br[1];
		for(i=2;i<=n;i++)
		{
			time=time+br[i];
			for(j=1;j<i;j++)
			{
				act[j]=act[j]-br[i];
			}
		}
		for(i=1;i<=n;i++)
			if(act[i]>max)
				max=act[i];
		time=time+max;
		printf("Case %ld: %ld\n",t,time);
		t++;
	}
	return 0;
}

void selectionsort(long int n)
{
	long int i,k,j,temp,t1;
	for(i=1;i<=n;i++)
	{
		j=i;
		for(k=i+1;k<=n;k++)
		{ 
			if(act[k]>act[j])
			{
				j=k;
			}
		}

		temp=act[i];
		act[i]=act[j];
		act[j]=temp;

		t1=br[i];
		br[i]=br[j];
		br[j]=t1; 
	}
	
}
