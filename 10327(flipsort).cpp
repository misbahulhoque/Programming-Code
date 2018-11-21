#include<stdio.h>

int bsort(int a[],int n);

int main()
{
int n,a[1000],i,m;
while(scanf("%d",&n)!=EOF)
{
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	m=bsort(a,n);
	printf("Minimum exchange operations : %d",m);
	printf("\n");
}
return 0;
}

int bsort(int a[],int n)
{
int count=0,ptr,k,t;
for(k=1;k<=n-1;k++)
{
	ptr=1;
	while(ptr<=n-k)
	{
		if(a[ptr]>a[ptr+1])
		{
			t=a[ptr];
			a[ptr]=a[ptr+1];
			a[ptr+1]=t;
			count++;
		}
		ptr++;
	}
}
return count;
}