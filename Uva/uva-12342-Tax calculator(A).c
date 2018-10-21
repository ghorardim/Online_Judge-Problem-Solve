#include<stdio.h>
#include<math.h>
int main()
{
    long long int sud;
    double sud1,tk;
    int T,x=1,a;
    scanf("%d",&T);
    while(T--)
    {
        a=1;
        scanf("%lf",&tk);
        if(tk>1180000)
        {
           tk=tk-1180000;
           sud=sud1=tk/4+150000;
        }
        else if(tk>880000)
        {
            tk=tk-880000;
            sud=sud1=tk/5+90000;
        }
        else if(tk>480000)
        {
            tk=tk-480000;
            sud=sud1=(3*tk/20)+30000;
        }
        else if(tk>200000)
        {
            tk=tk-180000;
            sud=sud1=tk/10;
        }
        else if(tk>180000)
        {
            sud=2000;
            a=0;
        }
        else
        {
            sud=0;
            a=0;
        }
        if(sud1>sud && a==1)sud++;
        printf("Case %d: %lld\n",x,sud);
        x++;
    }
    return 0;
}
