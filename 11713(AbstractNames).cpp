#include<stdio.h>
#include<string.h>

int vowel(char ch);

int main()
{
    long int i,len1,len2,test,j;
    char s1[21],s2[21];
    scanf("%ld",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%s%s",s1,s2);
        len1=strlen(s1);
        len2=strlen(s2);
        if(len1!=len2)
            printf("No\n");
        else
        {
            int flag=1;
            for(j=0;j<len1;j++)
            {
                if(vowel(s1[j])==0)
                {
                    if(s1[j]!=s2[j])
                    {
                        flag=0;
                        break;
                    }
                }

                else
                {
                    if(vowel(s2[j])==0)
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==0)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}

int vowel(char ch)
{

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}
