#include<stdio.h>

int main()
{
    long int n,i,j,k;
    double num[13],sum,result;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        sum=0.00;
        for(j=0;j<12;j++)
        {
            scanf("%lf",&num[j]);
            sum+=num[j];
        }
        result=sum/12;
        if(result>999)
        {
            long int k=result;
            long int a=k/1000;
            float b=result-(1000*a);
            printf("%ld $%ld,%.2lf\n",i,a,b);
        }
        else
        {
            printf("%ld $%.2lf\n",i,result);
        }

    }
    return 0;
}
