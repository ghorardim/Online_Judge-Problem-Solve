#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f;
    int no,x=1;
    while(scanf("%d",&no))
    {
        if(no==0)break;
        scanf("%lf%lf%lf",&a,&b,&c);
        switch(no)
        {
        case 1:
                e=(b-a)/c;
                d=(a+b)*c/2;
                printf("Case %d: %.3lf %.3lf\n",x,d,e);
                break;
        case 2:
                e=(b-a)/c;
                d=(a+b)*e/2;
                printf("Case %d: %.3lf %.3lf\n",x,d,e);
                break;
        case 3:
                d=sqrt((a*a)+(2*b*c));
                e=(d-a)/b;
                printf("Case %d: %.3lf %.3lf\n",x,d,e);
                break;
        case 4:
                d=sqrt((a*a)-(2*b*c));
                e=(a-d)/b;
                printf("Case %d: %.3lf %.3lf\n",x,d,e);
                break;
        }
        x++;
    }
   return 0;
}
