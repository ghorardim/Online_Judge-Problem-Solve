#include<stdio.h>
#define max 3651
int main()
{
    int day[max],N,p,n,i,T,f,s,count,j;
    scanf("%d",&T);
    for(i=1;i<=3650;i++)
        day[i]=0;
    while(T--)
    {
        count=0;
        scanf("%d",&N);
        scanf("%d",&p);
        for(i=1;i<=p;i++)
        {
            scanf("%d",&n);
            for(j=n;j<=N;j=j+n)
            day[j]=1;
        }
        f=6;
        s=7;
        for(i=1;i<=N;i++)
        {
            if(i==f)
               f=f+7;
            else if(i==s)
                s=s+7;
            else if(day[i]==1)
                count++;
            day[i]=0;
        }
        printf("%d\n",count);
    }
    return 0;
}

