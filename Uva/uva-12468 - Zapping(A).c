#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,forward,back;
    while(scanf("%d%d",&a,&b))
    {
        if(a<0 && b<0)break;
        forward=b-a;
        if(forward<0)forward=forward*(-1);
        if(a>b)
        {
        back=99-a;
        back=back+b+1;
        }
        else
        {
            back=99-b;
            back=back+a+1;
        }
        if(back<forward)
            printf("%d\n",back);
        else
            printf("%d\n",forward);
    }
    return 0;
}
