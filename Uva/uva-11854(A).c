#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)break;
        a=pow(a,2);
        b=pow(b,2);
        c=pow(c,2);
        if(a==(b+c))printf("right\n");
        else if(b==(a+c))printf("right\n");
        else if(c==(a+b))printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
