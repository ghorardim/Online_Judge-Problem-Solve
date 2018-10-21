#include<stdio.h>
#include<math.h>
#define pi 3.141592654
int main()
{
    int T;
    double c,r,L;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf",&L);
        r=L/5;
        c=pi*(r*r);
        printf("%.2lf %.2lf\n",c,(.6*(L*L)-c));
    }
    return 0;
}
