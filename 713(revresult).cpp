#include<stdio.h>
#include<string.h>

void add(char x[],char y[]);
void addzero(char x[],char y[]);
void reverse(char x[]);
void deletezero(char delt[]);


int main()
{
int test,i;
char x[1001],y[1001];
scanf("%d",&test);
for(i=1;i<=test;i++)
{
	scanf("%s %s",x,y);
	reverse(x);
	deletezero(x);
	reverse(y);
	deletezero(y);
	add(x,y);
	printf("\n");
}
return 0;
}


void add(char x[],char y[])
{
	char add_result[1001];
	int m,i,s,b,a,h,carry=0;
	addzero(x,y);
	m=strlen(x);
	h=0;
	while(m>0)
	{
		i=x[m-1]-'0';
		s=y[m-1]-'0';
		b=i+s+carry;
		a=b%10;
		carry=b/10;
		add_result[h]=a+'0';
		h++;
		m--;
	}
	if(carry>0)
	{
		add_result[h]=carry+'0';
		h++;
	}
add_result[h]='\0';
deletezero(add_result);
printf("%s",add_result);
}

void addzero(char x[],char y[])
{
	int m,i,s,b,a;
	char c[1001],c1[1001];
	b=0;
	m=strlen(x);
	i=strlen(y);
	if(m>i)
	{
		s=m-i;
		strcpy(c1,y);
		a=1;
	}
	else if(m<=i)
	{
		s=i-m;
		a=0;
		strcpy(c1,x);
	}
	while(b!=s)
	{
		c[b]='0';
		b++;
	}
	s=0;
	while(c1[s]!='\0')
	{
		c[b]=c1[s];
		b++;
		s++;
	}
	c[b]='\0';
	if(a==1)
		strcpy(y,c);
	else
		strcpy(x,c);
}

void reverse(char x[])
{
int i,j,k=0;
char c[1001];
i=strlen(x);
for(j=i-1;j>=0;j--)
{
	c[k]=x[j];
	k++;
}
c[k]='\0';
strcpy(x,c);
}

void deletezero(char delt[])
{
int del,j,i;
char delzero[1001];
i=strlen(delt);
for(del=0;del<=i-1;del++)
{
	if(delt[del]=='0')
		continue;
	else
		break;
}
j=0;
while(del<=i-1)
{
	delzero[j]=delt[del];
	del++;
	j++;
}
delzero[j]='\0';
strcpy(delt,delzero);
}