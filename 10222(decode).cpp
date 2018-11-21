#include<stdio.h>
#include<string.h>
#include<ctype.h>
char check(char p);
char key1[13]="qwertyuiop[]";
char key2[12]="asdfghjkl;'";
char key3[11]="zxcvbnm,./";
int main()
{
char input[10000],c,result;
int i,k;
gets(input);
i=strlen(input);
for(k=0;k<i;k++)
	{
	c=input[k];
	if(c==' ')
		printf(" ");
	else
		{
		if(isalpha(c))
			{
			if(islower(c))
				{
				result=check(c);
				printf("%c",result);
				}
			else
				{
				c=tolower(c);
				result=check(c);
				printf("%c",result);
				}
			}
		else
			{
			result=check(c);
			printf("%c",result);
			}	
		}
	}
printf("\n");
return 0;
}

char check(char c)
{
int i;
char r;
for(i=0;i<13;i++)
	{
	if(c==key1[i])
		r=key1[i-2];
	else if(c==key2[i])
		r=key2[i-2];
	else if(c==key3[i])
		r=key3[i-2];
	}
return r;
}
