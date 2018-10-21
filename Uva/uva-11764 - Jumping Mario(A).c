#include<stdio.h>
int main()
{
    int i,x=1,hj,lj,n,T,pl,h;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        lj=0;
        hj=0;
        scanf("%d",&pl);
        for(i=1;i<n;i++)
        {
            scanf("%d",&h);
            if(h>pl)
                hj++;
            else if(h<pl)
                lj++;
            pl=h;
        }
        printf("Case %d: %d %d\n",x,hj,lj);
        x++;
    }
    return 0;
}

