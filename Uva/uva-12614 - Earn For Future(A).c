#include<stdio.h>
int main()
{
    int T,N,i,big,card,x=1;
    scanf("%d",&T);
    while(T--)
    {
        big=0;
        scanf("%d",&N);
        for(i=1;i<=N;i++)
            {
                scanf("%d",&card);
                if(big<card)
                    big=card;
            }
        printf("Case %d: %d\n",x,big);
        x++;
    }
    return 0;
}
