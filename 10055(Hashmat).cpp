#include<stdio.h>
int main()
{
long int i,j,swap,d;
while((scanf("%ld %ld",&i,&j))!=EOF)
{
if(i>j)
	{
	swap=i;
	i=j;
	j=swap;
	}
d=j-i;
printf("%ld\n",d);
}
return 0;
}