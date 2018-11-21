#include<stdio.h>
#include<math.h>

int main()
{
	long int i,j,n1,n2,sum;
	while((scanf("%ld %ld",&n1,&n2))!=EOF)
	{
		long int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		long int b[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		long int c[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		i=0;
		while(n1!=0)
		{
			a[i]=n1%2;
			n1=n1/2;
			i++;
		}
		j=0;
		while(n2!=0)
		{
			b[j]=n2%2;
			n2=n2/2;
			j++;
		}
		sum=0;
		for(i=0;i<32;i++)
		{
			if(a[i]==b[i])
			{
				c[i]=0;
				sum+=c[i]*pow(2,i);
			}
			else
			{
				c[i]=1;
				sum=sum+(c[i]*pow(2,i));
			}
		}
		printf("%ld\n",sum);
	}
	return 0;
}