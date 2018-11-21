#include<stdio.h>
#include<string.h>

void add(char x[]);

int main()
{
char x[1001],y[1001];
int i,j,test,count,k;
scanf("%d",&test);
while(test>0)
{
	scanf("%s",x);
	i=strlen(x);
	k=0;
	for(j=i-1;j>=0;j--)
	{
		y[k]=x[j];
		k++;
	}	
	y[k]='\0';
	count=0;
	while(strcmp(x,y)!=0)
	{
		count++;
		add(x);
		i=strlen(x);
		k=0;
		for(j=i-1;j>=0;j--)
		{
			y[k]=x[j];
			k++;
		}		
	y[k]='\0';
	}
	printf("%d ",count);
	printf("%s",x);
	test--;
	printf("\n");
}
	
return 0;
}


void add(char x[])
{
	int s,h,a,o,n,t,carry=0,k,j;
	char add_result[1001],y[1001];
	s=strlen(x);
	k=0;
		for(j=s-1;j>=0;j--)
			{
			y[k]=x[j];
			k++;
			}
		y[k]='\0';
	t=0;
	while(s>0)
	{
		h=x[s-1]-'0';
		a=y[s-1]-'0';
		o=h+a+carry;
		n=o%10;
		carry=o/10;
		add_result[t]=n+'0';
		t++;
		s--;
	}
	if(carry>0)
	{
		add_result[t]=carry+'0';
		t++;
	}
	add_result[t]='\0';
	strcpy(x,add_result);
}
