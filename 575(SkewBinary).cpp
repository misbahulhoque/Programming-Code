#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	long int i,n,len,k,sum,number;
	char num[50];
	while(1)
	{
		gets(num);
		n=atol(num);
		if(n==0)
			break;
		len=strlen(num);
		k=len;
		sum=0;
		for(i=0;i<len;i++)
		{
			number=num[i]-'0';
			sum=sum+number*(pow(2,k)-1);
			k--;
		}
		printf("%ld\n",sum);
	}
	return 0;
}