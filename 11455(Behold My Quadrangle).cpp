#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	long int a,b,c,d,n,i,side[4];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
		if(a==0||b==0||c==0||d==0)
			printf("banana\n");
		else
		{
			side[0]=a;
			side[1]=b;
			side[2]=c;
			side[3]=d;
			sort(side,side+4);
			if((side[0]+side[1]+side[2])>side[3])
			{
				if(a==b && b==c && c==d)
					printf("square\n");
				else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
					printf("rectangle\n");
				else
					printf("quadrangle\n");
			}
			else
				printf("banana\n");
		}

	}
	return 0;

}