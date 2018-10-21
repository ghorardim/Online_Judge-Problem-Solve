#include<stdio.h>
#include<string.h>
#define max 35
#define maxi 300
int main()
{
    char str[max];
    int arr[maxi],num[max],y,i,n,x=1,j,flag,count,ln;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<maxi;j++)arr[j]=0;
            for(j=0;j<max;j++)num[j]=0;
            scanf("%s",str);
            ln=strlen(str);
            if(ln<2)continue;
            flag=1;
            for(j=0;str[j]!='\0';j++)
            {
                y=str[j];
                arr[y+128]++;
            }
            for(j=97+128;j<=122+128;j++)
            {
                if(arr[j]>0)
                num[arr[j]]++;
                if(num[arr[j]]>1)
                {
                    flag=2;
                    break;
                }
            }
            if(flag==1)
                count++;
        }
        printf("Case %d: %d\n",x,count);
        x++;
    }
    return 0;
}
