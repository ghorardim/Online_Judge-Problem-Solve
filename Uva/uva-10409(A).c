#include<stdio.h>
#include<string.h>
#define max 7
int main()
{
    int ar[max],inx,i,N,team1,team2;
    char ch[max];
    while(scanf("%d",&N))
    {
        ar[1]=1;ar[2]=2;ar[3]=3;ar[4]=4;ar[5]=5;ar[6]=6;
        if(N==0)break;
    for(i=0;i<N;i++)
    {
        scanf("%s",ch);
        if(ch[0]=='n')
            inx=2;
        else if(ch[0]=='s')
            inx=5;
        else if(ch[0]=='w')
            inx=3;
        else
            inx=4;
        team1=ar[1];
        team2=ar[6];
        ar[6]=ar[inx];
        ar[1]=ar[7-inx];
        ar[inx]=team1;
        ar[7-inx]=team2;
    }
    printf("%d\n",ar[1]);
    }
    return 0;
}
