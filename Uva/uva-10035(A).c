#include<stdio.h>
int main()
{
    unsigned long long int a,b,sum;
    int count;
    while(scanf("%llu%llu",&a,&b)==2)
    {
        if(a==0 && b==0)break;
        sum=count=0;
        while(1)
        {
            sum=(sum+(a%10)+(b%10))/10;
            count=count+sum;
            a=a/10;
            b=b/10;
            if((a+b+sum)/10==0)break;
        }
        if(count==1)
            printf("%d carry operation.\n",count);
        else if(count>1)
            printf("%d carry operations.\n",count);
        else
            printf("No carry operation.\n");
    }
    return 0;
}

