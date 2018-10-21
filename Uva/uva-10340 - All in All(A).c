#include<stdio.h>
#include<string.h>
#define max 1000000
int main()
{
    char str[max],str2[max];
    int i,j,sum,ln,d;
    while(scanf("%s%s",str,str2)!=EOF)
    {
        d=sum=0;
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            for(j=d;str2[j]!='\0';j++)
            {
                if(str[i]==str2[j])
                {
                    sum=sum+1;
                    d=j+1;
                    break;
                }
            }
        }
        if(ln==sum)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
