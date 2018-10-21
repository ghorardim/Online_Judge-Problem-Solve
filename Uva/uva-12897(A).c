#include<stdio.h>
#include<string.h>
#define max 1000000
#define maxi 128
int main()
{
    int T,n,i,j,y;
    char str[max],in,vl,c,arr[maxi];
    for(i=33;i<127;i++)arr[i]=i;
    scanf("%d%c",&T,&c);
    while(T--)
    {
        scanf("%s%c",str,&c);
        scanf("%d%c",&n,&c);
        for(i=0;i<n;i++)
        {
            scanf("%c%c%c%c",&vl,&c,&in,&c);
            for(j=65;j<91;j++)
            {
                if(arr[j]==in)
                    arr[j]=vl;
            }
        }
        for(i=0;str[i]!='\0';i++)
        {
            y=str[i];
            printf("%c",arr[y]);
        }
        printf("\n");
        for(i=65;i<91;i++)arr[i]=i;
    }
    return 0;
}
