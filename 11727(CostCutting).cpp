#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long int num[3],i,j,test;
	scanf("%ld",&test);
	for(i=1;i<=test;i++)
	{
		for(j=0;j<3;j++)
			scanf("%ld",&num[j]);
		sort(num,num+3);
		printf("Case %ld: %ld\n",i,num[1]);
	}
	return 0;
}