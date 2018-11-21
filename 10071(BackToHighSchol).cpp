#include<stdio.h>

int main()
{
	long long int v,y;
	long long int t;
	while((scanf("%lld %lld",&v,&t))!=EOF)
	{
		if(v<0 && t<0)
			break;
		t=2*t;
		y=v*t;
		printf("%lld\n",y);
	}
	return 0;
}
