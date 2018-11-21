#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,len,count;
	char str[101][101];
	i=0;
	len=0;
	while(gets(str[i]))
	{
		if(strcmp(str[i],"EOF")==0)
			break;
		if(strlen(str[i])>len)
			len=strlen(str[i]);
		i++;
	}
	count=i;
	for(j=0;j<len;j++)
	{
		for(k=count-1;k>=0;k--)
		{
			i=strlen(str[k]);
			if(i>j)
				printf("%c",str[k][j]);
			if(i<=j && k!=0)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
