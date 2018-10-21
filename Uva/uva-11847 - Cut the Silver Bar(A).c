#include<stdio.h>
#include<math.h>
int main()
{
    double cut;
    int n,res;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        res=cut=log(n)/log(2);
        printf("%d\n",res);
    }
    return 0;
}
