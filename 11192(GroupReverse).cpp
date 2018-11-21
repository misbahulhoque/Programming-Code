#include<stdio.h>
#include<string.h>

int main()
{
	long int len,i,j,n,k,g;
	char str[1000],str2[1000];
	while(1)
	{
		scanf("%ld",&g);
		if(g==0)
			break;
		scanf("%s",str);
		len=strlen(str);
		n=len/g;
		i=0;
		j=n-1;
		k=2;
		while(i<len)
		{
			str2[i]=str[j];
			i++;
			if(i-j==n)
			{
				j=k*n;
				k++;
			}
			j--;
		}
		str2[i]='\0';
		printf("%s\n",str2);
	}
	return 0;
}