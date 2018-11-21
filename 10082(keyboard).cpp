#include<stdio.h>
#include<string.h>
#include<ctype.h>
char check(char p);
char key1[]="QWERTYUIOP[]";
char key2[]="ASDFGHJKL;'";
char key3[]="ZXCVBNM,./";
char key4[]="`1234567890-=";
int main()
{
char input[10000],c,result;
int i,k;
while(gets(input))
{
	i=strlen(input);
	for(k=0;k<i;k++)
		{
			c=input[k];
			
			if(c==' ')
				printf(" ");
			else if(c=='\\')
				printf("]");
			else
			{
				result=check(c);
				printf("%c",result);
			}
		}
printf("\n");
}
return 0;
}

char check(char c)
{
int i;
for(i=0;i<13;i++)
	{
	if(c==key1[i])
		return key1[i-1];
	else if(c==key2[i])
		return key2[i-1];
	else if(c==key3[i])
		return key3[i-1];
	else if(c==key4[i])
		return key4[i-1];
	}
}
