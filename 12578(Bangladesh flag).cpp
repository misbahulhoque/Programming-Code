#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int test,i;
    double l,w,r;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
            scanf("%lf",&l);
            w = 0.6*l;
            r = l/5;
            printf("%.2lf %.2lf\n",PI*r*r,(l*w)-(PI*r*r));
    }
    return 0;
}
