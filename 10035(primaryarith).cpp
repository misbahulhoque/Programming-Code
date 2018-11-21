#include<stdio.h>			
#include<string.h>

int main()
{
	unsigned int x,y;
	long int i,m,n,a,len,len1,len2,zero,count,carry,add,b;
	char num1[11],num2[11];
	while(scanf("%u %u",&x,&y))
	{
		if(x==0 && y==0)
			break;
		m=x;
		n=y;
		i=0;
		while(m!=0)
		{
			m=m/10;			
			i++;
		}
		len1=i;

		i=0;
		while(n!=0)
		{
			n=n/10;	
			i++;
		}
		len2=i;

		if(len1>len2)
		{
			len=len1;
			for(i=len-1;i>=0;i--)
			{
				a=x%10;
				num1[i]=a+'0';
				x=x/10;
			}
			num1[len]='\0';
			zero=len1-len2;
			for(i=0;i<zero;i++)
				num2[i]='0';
			for(i=len-1;i>=zero;i--)
			{
				a=y%10;
				num2[i-1]=a+'0';
				y=y/10;
			}
			num2[len]='\0';
			
		}
		else if(len2>len1)
		{
			len=len2;
			for(i=len-1;i>=0;i--)
			{
				a=y%10;
				num2[i]=a+'0';
				y=y/10;
			}
			num2[len]='\0';
			zero=len2-len1;
			for(i=0;i<zero;i++)
				num1[i]='0';
			for(i=len-1;i>=zero;i--)
			{
				a=x%10;
				num1[i]=a+'0';
				x=x/10;
			}
			num1[len]='\0';
		}
		else
		{
			len=len1;
			for(i=len-1;i>=0;i--)
			{
				a=x%10;
				num1[i]=a+'0';
				x=x/10;
			}
			num1[len]='\0';
			for(i=len-1;i>=0;i--)
			{
				a=y%10;
				num2[i]=a+'0';
				y=y/10;
			}
			num2[len]='\0';
		}

		count=0;
		carry=0;
		for(i=len-1;i>=0;i--)
		{
			a=num1[i]-'0';
			b=num2[i]-'0';
			add=a+b+carry;
			if(add>9)
			{
				carry=add/10;
				count++;
			}
			else
				carry=0;
		}
		if(count==0)
			printf("No carry operation.\n");
		else if(count==1)
			printf("%u carry operation.\n",count);
		else if(count>1)
			printf("%u carry operations.\n",count);
	}
	return 0;
}

