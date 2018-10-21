#include<stdio.h>
int main()
{
    int a,b,c,l,t,sma1,sma2,large,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(b>=a && a<=c && b<=c)
        {
            sma1=a;
            sma2=b;
            large=c;
        }
        else if(b>=a && a<=c && c<=b)
        {
            sma1=a;
            sma2=c;
            large=b;
        }
        else if(a>=b && c>=b && a<=c)
        {
            sma1=b;
            sma2=a;
            large=c;
        }
        else if(a>=b && c>=b && c<=a)
        {
            sma1=b;
            sma2=c;
            large=a;
        }
        else if(a>=c && b>=c && a<=b)
        {
            sma1=c;
            sma2=a;
            large=b;
        }
        else if(a>=c && b>=c && b<=a)
        {
            sma1=c;
            sma2=b;
            large=a;
        }
        if((sma1+sma2)>large)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
