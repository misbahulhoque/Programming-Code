#include<stdio.h>

int main()
{
    int test,i;
    float r,result,c,d;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%f %f",&c,&d);
        r=(d*5)/9;
        result=r+c;
        printf("Case %d: %.2f\n",i,result);
    }
    return 0;
}
