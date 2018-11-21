#include<stdio.h>

int main()
{
    long int a,b,c,sum,test;
    scanf("%ld",&test);
    while(test!=0)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a>b)
        {
            if(b>c)
            {
                if((a+c)>b)
                    printf("OK\n");
                else
                    printf("Wrong!!\n");
            }
            else
            {
                if((a+b)>c)
                   printf("OK\n");
                else
                    printf("Wrong!!\n");
            }
        }
        else
        {
            if(b>c)
            {
                if((a+c)>b)
                    printf("OK\n");
                else
                    printf("Wrong!!\n");
            }
            else
            {
                if((a+b)>c)
                   printf("OK\n");
                else
                    printf("Wrong!!\n");
            }
        }
        test--;
    }
    return 0;
}
