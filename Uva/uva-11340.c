#include<stdio.h>
#define max 128
int main()
{
    int T,nc,line,i,y,rate;
    double ac[max],sum;
    char ch,c;
    scanf("%d%c",&T,&c);
    while(T--)
    {
        line=sum=0;
        for(i=0;i<=128;i++)
            ac[i]=0;
        scanf("%d%c",&nc,&c);
        for(i=0;i<nc;i++)
        {
            scanf("%c%c%d%c",&ch,&c,&rate,&c);
            y=ch;
            ac[y]=(float)rate/100;
        }
        scanf("%d%c",&line,&c);
        i=0;
        while(1)
        {
            ch=getchar();
            if(ch=='\n')i++;
            if(i==line)break;
            y=ch;
            sum=sum+ac[y];
        }
        printf("%.2lf$\n",sum);
    }
    return 0;
}

