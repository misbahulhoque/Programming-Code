#include<stdio.h>

int main()
{
    long int a,b,c,d,l,n,result=0,count;
    long int i,j;
    while(1)
    {
        scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l);
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        count=0;
        for(i=0;i<=l;i++)
        {
            result=(a*(i*i))+(b*i)+c;
            if(result%d==0)
            {
                count++;
            }
        }
        printf("%ld\n",count);
    }
    return 0;
}
