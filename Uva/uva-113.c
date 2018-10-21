#include<stdio.h>
#include<math.h>
int main()
{
    double k,n,p;
    while(scanf("%lf",&n)!=EOF)
    {
        scanf("%lf",&p);
        printf("%0.0lf\n",pow(p,(1/n)));
    }
    return 0;
}

