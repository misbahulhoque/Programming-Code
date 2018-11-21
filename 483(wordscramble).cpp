#include<stdio.h>
#include<string.h>

int main()
{
int i,t,k,m;
char str[1000],word[1000];
while(gets(str))
{
t=strlen(str);
k=0;
for(i=0;i<=t;i++)
	{
		if((str[i]!=' ')&&(str[i]!='\0'))
			{
			word[k]=str[i];
			k++;
			continue;
			}
		else
			{
			word[k]='\0';
			for(m=k-1;m>=0;m--)
				printf("%c",word[m]);
			if(str[i]==' ')
				printf(" ");
			k=0;
			continue;
			}
	}
printf("\n");
}
return 0;
}