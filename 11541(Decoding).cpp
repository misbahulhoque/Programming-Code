#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	long int i,j,len,test,k,m,t,len2;
	char s1[201],s2[201],num[201];
	scanf("%ld",&test);
	for(i=1;i<=test;i++)
	{
		scanf("%s",s1);
		len=strlen(s1);
		k=0;
		t=0;
		char ch=s1[0];
		for(j=1;j<len;j++)
		{
			if(s1[j]>='A' && s1[j]<='Z')
			{
				num[t]='\0';
				len2=atol(num);
				for(m=1;m<=len2;m++)
				{
					s2[k]=ch;
					k++;
				}
				t=0;
				ch=s1[j];
			}
			else
			{
				num[t]=s1[j];
				t++;
			}
		}
		num[t]='\0';
		len2=atol(num);
		for(m=1;m<=len2;m++)
		{
			s2[k]=ch;
			k++;
		}
		s2[k]='\0';
		printf("Case %ld: %s\n",i,s2);
	}
	return 0;
}