#include<stdio.h>
int main()
{
    int T,higt,num,i,j,k,l,count;
    scanf("%d",&T);
    while(T--)
    {
        count=0;
        scanf("%d",&higt);
        scanf("%d",&num);
        for(l=1;l<=num;l++)
        {
            for(i=1;i<=higt;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                    printf("\n");
            }
            for(i=higt-1;i>=1;i--)
            {
                for(j=i;j>=1;j--)
                printf("%d",i);
                printf("\n");
            }
            count++;
            if(count!=num)
                printf("\n");
        }
        if(T!=0)printf("\n");
    }
    return 0;
}
