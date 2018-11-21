#include<stdio.h>
#include<string.h>

int main()
{
	long int i,j,len,k;
	char str[1001],name[1001];
	while(1)
	{
		gets(str);
		if(strcmp(str,"DONE")==0)
			break;
		len=strlen(str);
		k=0;
		for(i=0;i<len;i++)
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				name[k]=str[i]+32;
				k++;
			}
			else if(str[i]>='a' && str[i]<='z')
			{
				name[k]=str[i];
				k++;
			}
			else
				continue;
		}
		name[k]='\0';
		len=strlen(name);
		int flag=1;
		for(i=0,j=len-1;i<len,j>=0;i++,j--)
		{
			if(name[i]!=name[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;
	
}