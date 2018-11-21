#include<stdio.h>
#include<stdlib.h>

int marble[10001];
int query[10001];

int sort( const void *a, const void *b)
{
   return *(int *)a - *(int *)b;
}

int main()
{
	int i,n,q,test=1,j,loc;
	while(1)
	{
		scanf("%d %d",&n,&q);
		if(n==0 && q==0)
			break;

		for(i=0;i<n;i++)
			scanf("%d",&marble[i]);
		for(i=0;i<q;i++)
			scanf("%d",&query[i]);
		qsort((void *)marble,n,sizeof(marble[0]),sort);
		printf("CASE# %d:\n",test);
		for(i=0;i<q;i++)
		{
		    int flag=0;
			int num=query[i];
			for(j=0;j<n;j++)
            {
                if(num==marble[j])
                {
                    flag=1;
                    loc=j+1;
                    break;
                }
            }
			if(flag==0)
				printf("%d not found\n",num);
			else
				printf("%d found at %d\n",num,loc);
		}
		test++;
	}
	return 0;
}
