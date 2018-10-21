#include<stdio.h>
#include<string.h>
#define maxi 10000
#define max 300
int main()
{
    int i,j,a,min,index,str[max],tc,count,y,x=0;
    char ch,car,str2[maxi];
    while(gets(str2))
    {
        if(x!=0)printf("\n");
        x=1;
        car=20;
        tc=count=0;
        for(i=0;i<max;i++)str[i]=0;
        for(i=0;str2[i]!='\0';i++)
        {
            y=str2[i];
            str[y+128]++;
            if(car!=str2[i])
            {
                car=str2[i];
                tc++;
            }
        }
        for(i=(32+128);i<max;i++)
        {
            if(str[i]==0)continue;
            min=str[i];
            index=i;
            a=1;
            for(j=(32+128);j<=(128+128);j++)
            {
                if(i==j || str[j]==0)continue;
                if(min>=str[j])
                {
                    min=str[j];
                    index=j;
                    a=0;
                }
            }
            if(a==1)
            {
                printf("%d %d\n",index-128,str[i]);
                str[i]=0;
                count++;
            }
            else
            {
                printf("%d %d\n",index-128,min);
                str[index]=0;
                count++;
            }
            if(count==tc)break;
            i=31+128;
        }
    }
    return 0;
}
