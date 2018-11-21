#include<stdio.h>
int main()
{
long long int r,c,cut;
while((scanf("%lld %lld",&r,&c))!=EOF)
{
cut=r*c-1;
printf("%lld\n",cut);
}
return 0;
}