#include<stdio.h>

int main()
{
	long int a[4],test,i,temp,k,j;			//a[4] are signed integer
	scanf("%ld",&test);
	for(i=1;i<=test;i++)
	{
		scanf("%ld %ld %ld",&a[1],&a[2],&a[3]);
		for(j=1;j<=3;j++)
		{
			for(k=j+1;k<=3;k++)
			{
				if(a[k]<a[j])
				{
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		if((a[1]+a[2])>a[3])
		{
			if(a[1]==a[2] && a[2]==a[3])
				printf("Case %ld: Equilateral\n",i);
			else if(a[1]==a[2] || a[1]==a[3] || a[2]==a[3])
				printf("Case %ld: Isosceles\n",i);
			else
				printf("Case %ld: Scalene\n",i);
		}
		else
			printf("Case %ld: Invalid\n",i);
		
	}
	return 0;
}