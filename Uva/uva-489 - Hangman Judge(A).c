#include<stdio.h>
#include<string.h>
#define max 50000
#define maxi 300
int main()
{
    char str[max],str2[max],c;
    int arr[maxi],i,j,y,Ar[maxi],tc,count,ar[maxi],a,n;
    for(i=0;i<maxi;i++)arr[i]=Ar[i]=ar[i]=0;
    while(scanf("%d%c",&n,&c))
    {
        a=count=tc=0;
        if(n<0)break;
        gets(str);
        gets(str2);
        for(i=0;str[i]!='\0';i++)
        {
            y=str[i];
            if(arr[y+128]==0)
            {
            ar[y+128]=arr[y+128]=1;
            tc++;
            }
        }
        printf("Round %d\n",n);
        for(i=0;str2[i]!='\0';i++)
        {
            y=str2[i];
            if(arr[y+128]==1 && ar[y+128]==1)
            {
                tc--;
                arr[y+128]=0;
                if(tc==0)
                {
                    a=1;
                    printf("You win.\n");
                    break;
                }
            }
            else if(arr[y+128]==0 && ar[y+128]==0)
            {
                if(Ar[y+128]==0)
                {
                    count++;
                    Ar[y+128]=1;
                    if(count==7)
                    {
                        printf("You lose.\n");
                        a=2;
                        break;
                    }
                }
            }
        }
        if(a==0)
            printf("You chickened out.\n");
        for(i=0;i<maxi;i++)arr[i]=Ar[i]=ar[i]=0;
    }
    return 0;
}
