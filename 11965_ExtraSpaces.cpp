#include<stdio.h>
#include<string.h>

int main()
{
    long int len,i,j,test,n,k,m;
    char str[51][501],out[51][501];
    scanf("%ld",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%ld",&n);
        getchar();
        for(j=0;j<n;j++)
        {
            gets(str[j]);
            len=strlen(str[j]);
            int flag=0;
            m=0;
            for(k=0;k<len;k++)
            {
                if(str[j][k]==' ')
                {
                    if(flag==0)
                    {
                        flag=1;
                        out[j][m]=' ';
                        m++;
                    }
                    else
                        continue;

                }
                else
                {
                    flag=0;
                    out[j][m]=str[j][k];
                    m++;
                }

            }
            out[j][m]='\0';
        }
        printf("Case %ld:\n",i);
        for(j=0;j<n;j++)
        {
            len=strlen(out[j]);
            for(k=0;k<len;k++)
                printf("%c",out[j][k]);
            printf("\n");
        }
        if(i!=test)
            printf("\n");
    }
    return 0;
}
