#include<stdio.h>

int main()
{
	long int gcd,lcm,test;
	scanf("%ld",&test);
	while(test>0)
	{
		scanf("%ld %ld",&gcd,&lcm);
		if(lcm%gcd!=0)
			printf("-1\n");
		else
			printf("%ld %ld\n",gcd,lcm);
		test--;
	}
	return 0;
}