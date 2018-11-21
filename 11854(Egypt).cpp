#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long int a,b,c;
	long int num[3];
	while(1)
	{
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a==0&&b==0&&c==0)
			break;
		num[0]=a;
		num[1]=b;
		num[2]=c;
		sort(num,num+3);
		if(((num[0]*num[0])+(num[1]*num[1]))==(num[2]*num[2]))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}