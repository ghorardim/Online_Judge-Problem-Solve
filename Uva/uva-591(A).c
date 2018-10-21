#include<stdio.h>
#define max 51
int main()
{
    int n,h[max],i,min,sum,base,x=1;
    while(scanf("%d",&n))
    {
        min=sum=base=0;
        if(n==0)break;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&h[i]);
            sum=sum+h[i];
        }
        base=sum/n;
        for(i=1;i<=n;i++)
            if(h[i]<base)
                min=min+(base-h[i]);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",x,min);
        x++;
        }
    return 0;
}

