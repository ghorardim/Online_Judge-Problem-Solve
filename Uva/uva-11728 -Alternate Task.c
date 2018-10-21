#include<stdio.h>
#include<math.h>
int main()
{
    int input,i,sum,half,t=1,key,j;
    while(scanf("%d",&input)!=EOF)
    {
        if(input==0)break;
        key=1;
        for(i=input-1;i>=2;i--)
        {
            half=i/2+1;
            sum=i+1;
            for(j=2;j<half;j++)
            {
                if(i%j==0)
                {
                    sum=sum+j;
                    if(sum>input)
                        break;
                }
            }
            if(sum==input)
            {
               key=2;
               printf("Case %d: %d\n",t,i);
               break;
            }
        }
        if(input==1)
            printf("Case %d: 1\n",t);
        else if(key==1)
            printf("Case %d: -1\n",t);
            t++;
    }
    return 0;
}
