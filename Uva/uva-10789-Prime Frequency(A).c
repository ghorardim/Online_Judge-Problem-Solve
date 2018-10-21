#include<stdio.h>
#include<math.h>
#define max 2100
#define maxi 300
int arr[max];
char str[max];
int main()
{
    char str[max];
    int i,j,T,total[maxi],y,x=1,a;
    for(i=4;i<=2100;i=i+2)
        arr[i]=1;
    for(i=3;i<=47;i=i+2)
        if(arr[i]!=1)
        for(j=i*i;j<=2100;j=j+i)arr[j]=1;
    arr[1]=1;
    scanf("%d",&T);
    for(i=0;i<maxi;i++)total[i]=0;
    while(T--)
    {
        a=0;
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            y=str[i];
            total[y+128]++;
        }
        printf("Case %d: ",x);
        for(i=(48+128);i<=(122+128);i++)
        {
            if(total[i]>0)
            {
                if(arr[total[i]]!=1)
                {
                    printf("%c",i-128);
                    a=1;
                }
                total[i]=0;
            }
        }
        if(a==0)
          printf("empty");
        printf("\n");
        x++;
    }
    return 0;
}
