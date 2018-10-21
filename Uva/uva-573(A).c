#include<stdio.h>
int main(void)
{
    double initial_hyt,distance_climbed,hyt_after_climbing,hyt_after_sliding,x;
    int day;
    int well_hyt,can_climb,sliding_fall,percentage;
    int fail;
    while(1)
    {
        day=1;
        fail=0;
        initial_hyt=0;
        scanf("%d %d %d %d",&well_hyt,&can_climb,&sliding_fall,&percentage);
        if(well_hyt==0)break;
        x=(percentage*can_climb)/100.0;
        distance_climbed=can_climb;
        int i;
        while(1)
        {
            hyt_after_climbing=initial_hyt+distance_climbed;
            if(hyt_after_climbing>well_hyt)break;
            hyt_after_sliding=hyt_after_climbing-sliding_fall;
            if(hyt_after_sliding<0)
            {
                fail=1;
                break;
            }
            day++;
            initial_hyt=hyt_after_sliding;
            distance_climbed=distance_climbed-x;
            if(distance_climbed<=0)
            {
                fail=1;
                distance_climbed=0;
            }
        }
        if(fail)
        {
            printf("failure on day %d\n",day);
        }
        else
        {
            printf("success on day %d\n",day);
        }
    }
    return 0;
}

