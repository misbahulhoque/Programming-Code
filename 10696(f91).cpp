#include<stdio.h>
long int f91(int p);
int main()
{
long int n,result;
while((scanf("%ld",&n))!=EOF)
{
if(n==0)
	break;
result=f91(n);
printf("f91(%ld) = %ld\n",n,result);
}
return 0;
}
long int f91(int n)
{
long int i;
if(n<=100)
	i=f91(f91(n+11));
else if(n>=101)
	i=n-10;
return i;
}