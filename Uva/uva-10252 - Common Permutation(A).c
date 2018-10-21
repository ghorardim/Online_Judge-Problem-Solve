#include<stdio.h>
#include<string.h>
#define max 1003
#define maxi 350
int main()
{
    char str[max];
    int i,j=0,y,k,n,check[maxi],check2[maxi];
    for(i=0; i<maxi; i++)
        check[i]=check2[i]=0;
    while(gets(str))
    {
        if(j==0)
        {
        for(i=0; str[i]!='\0'; i++)
        {
            y=str[i];
            check[y+128]++;
        }
        j++;
        }
        else if(j==1)
        {
        for(i=0; str[i]!='\0'; i++)
        {
            y=str[i];
            check2[y+128]++;
        }
        j++;
        }
        if(j>1)
        {
            for(i=(97+128); i<=(122+128); i++)
            {
                if(check[i]>0 && check2[i]>0)
                {
                    if(check[i]<=check2[i])n=check[i];
                    else
                        n=check2[i];
                    for(k=1;k<=n;k++)
                        printf("%c",i-128);
                }
                check[i]=check2[i]=0;
            }
            printf("\n");
            j=0;
        }
    }
    return 0;
}
