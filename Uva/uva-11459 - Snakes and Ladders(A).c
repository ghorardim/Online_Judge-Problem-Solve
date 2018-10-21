#include<stdio.h>
#define max 1000005
int board[max],pla[max],arr[max];
int main()
{
    int i,k,y,a,b,c,T,x;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&a,&b,&c);
        k=1;
        for(i=1;i<=a;i++)pla[i]=1;
        for(i=1;i<=max;i++)board[i]=0;
        for(i=1;i<=b;i++)
        {
            scanf("%d%d",&x,&y);
            board[x]=y;
        }
        for(i=1;i<=c;i++)scanf("%d",&arr[i]);
        for(i=1;i<=c;i++)
        {
            pla[k]=pla[k]+arr[i];
            if(pla[k]>=100)break;
            if(pla[k]<100 && board[pla[k]]!=0)
                pla[k]=board[pla[k]];
            if(pla[k]>=100)break;
            k++;
            if(k>a)
                k=1;
        }
        for(i=1;i<=a;i++)
        {
            if(pla[i]>=100)
                printf("Position of player %d is 100.\n",i);
            else
                printf("Position of player %d is %d.\n",i,pla[i]);
        }
    }
    return 0;
}
