#include<stdio.h>
#include<string.h>

int main()
{
	long int n,a,sum,x,i;
	char bin[32];

	while(1)
	{
		scanf("%ld",&n);
		x=n;
		sum=0;
		if(x==0)
			break;
		i=0;
		while(x!=0)
		{
			a=x%2;
			bin[i]=a+'0';
			sum+=a;
			x=x/2;
			i++;
		}
		bin[i]='\0';
		printf("The parity of ");
		while(i!=0)
		{
			printf("%c",bin[i-1]);
			i--;
		}
		printf(" is %ld (mod 2).\n",sum);
	}
	return 0;

}