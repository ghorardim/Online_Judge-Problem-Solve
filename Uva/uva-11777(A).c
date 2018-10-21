#include<stdio.h>
int main()
{
    double sum,n,a,b,c,big1,big2;
    int T,x=1,i;
    char ch;
    scanf("%d",&T);
    while(T--)
    {
        sum=0;
        for(i=1;i<=4;i++)
        {
            scanf("%lf",&n);
            sum=sum+n;
        }
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a>=b && c>=b)
        {
            big1=a;
            big2=c;
        }
        else if(a>=c && b>=c)
        {
            big1=a;
            big2=b;
        }
        else if(b>=a && c>=a)
        {
            big1=b;
            big2=c;
        }
        sum=sum+(big1+big2)/2;
        if(sum>=90)
            ch='A';
        else if(sum<90 && sum>=80)
            ch='B';
        else if(sum<80 && sum>=70)
            ch='C';
        else if(sum<70 && sum>=60)
            ch='D';
        else
            ch='F';
        printf("Case %d: %c\n",x,ch);
        x++;
    }
    return 0;
}
