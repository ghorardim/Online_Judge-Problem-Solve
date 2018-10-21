#include<stdio.h>
int main()
{
    int T,N,K,P,i,jabir,x=1;;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&N,&K,&P);
        jabir=K;
        for(i=1;i<=P;i++)
        {
            jabir++;
          if(jabir>N)jabir=1;
        }
        printf("Case %d: %d\n",x,jabir);
        x++;
    }
    return 0;
}
