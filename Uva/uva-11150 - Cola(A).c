#include<stdio.h>
int main()
{
    int num,hand,finish,eat;
    while(scanf("%d",&num)!=EOF)
    {
        hand=5;
        finish=eat=0;
        while(hand>2)
        {
            hand=num%3;
            finish=num/3;
            eat=eat+finish*3;
            hand=hand+finish;
            num=hand;
        }
        if(hand==1)
            printf("%d\n",eat+1);
        else if(hand==2)
            printf("%d\n",eat+3);
    }
    return 0;
}
