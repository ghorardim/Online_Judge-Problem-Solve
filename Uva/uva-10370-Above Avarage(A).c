#include<stdio.h>
#define max 1001
int main()
{
    int c,n,i,sum,ar[max],count;
    float result,avarage;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        count=sum=i=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            sum=sum+ar[i];
        }
        avarage=(float)sum/n;
        for(i=0;i<n;i++)
            if(ar[i]>avarage)count++;
        result=((float)count/n)*100;
        printf("%.3lf%c\n",result,37);
    }
    return 0;
}
