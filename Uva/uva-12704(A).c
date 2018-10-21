#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    double x,y,res,r;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf%lf%lf",&x,&y,&r);
        res=sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n",r-res,res+r);
    }
    return 0;
}
