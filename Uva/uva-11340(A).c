#include<stdio.h>
#define max 300///Here is the change....
int main()
{
    int T,nc,line,i,y,rate;
    int ac[max],sum;
    char ch,c;
    scanf("%d%c",&T,&c);
    while(T--)
    {
        line=sum=0;
        for(i=0; i<max; i++) ///Always remember You should use i < max not i <= max.
            ac[i]=0;
        scanf("%d%c",&nc,&c);
        for(i=0; i<nc; i++)
        {
            scanf("%c%c%d%c",&ch,&c,&rate,&c);
            y=ch;
            ac[y + 128]=rate;///Double has precission problem...so try to avoid the
            ///use of double...& also look, I use arr[y + 128], cause the char value can be negative...
        }
        scanf("%d%c",&line,&c);
        i=0;
        while(1)
        {
            ch=getchar();
            if(ch=='\n')i++;
            if(i==line)break;
            y=ch;
            sum=sum+ac[y + 128];
        }
        printf("%.2lf$\n",sum / 100.0);///At last I divide sum by 100 to
        ///avoid double type number precission problem.
    }
    return 0;
}

