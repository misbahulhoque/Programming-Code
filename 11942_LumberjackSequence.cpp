#include<stdio.h>
int main()
{
    int num[11],n,i,j,max,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<10;j++)
            scanf("%d",&num[j]);

        for(j=0;j<10;j++)
        {
            if(num[j]!=num[j+1])
            {
                max=num[j];
                k=j+1;
                break;
            }
        }
        int flag=1;
        if(max>num[k])
        {
            while(k<10)
            {
                if(max>=num[k])
                {
                    max=num[k];
                    k++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        else
        {
            while(k<10)
            {
                if(max<=num[k])
                {
                    max=num[k];
                    k++;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }

        if(i==1)
            printf("Lumberjacks:\n");
        if(flag==1)
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }
}
