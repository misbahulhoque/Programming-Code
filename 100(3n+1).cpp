#include<stdio.h>

long unsigned int cycle(long unsigned int p);

int main()
{
	long unsigned int i,j,n,length,t,swap;
	while((scanf("%lu %lu",&i,&j))!=EOF)
	{
		printf("%lu %lu ",i,j);
		if(i>j)
		{
			swap=i;
			i=j;
			j=swap;
		}
		length=1;
		for(n=i;n<=j;n++)
		{
			t=cycle(n);
			if(t>length)
			length=t;
		}
		printf("%lu\n",length);
	}
	return 0;
}

long unsigned int cycle(long unsigned int n)
{
	long unsigned int k=1;
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			k++;
		}
		else
		{
			n=3*n+1;
			k++;
		}
	}
	return k;
}