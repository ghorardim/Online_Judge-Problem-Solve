#include<stdio.h>
#include<string.h>
#define maxi 26
#define max 31
int main()
{
    char dis[max][maxi];
    int N,i,j,h,w,D,a,x=1,ln;
    scanf("%d",&N);
    while(N--)
    {
        a=D=0;
        for(i=0; ; i++)
        {
            scanf("%s",dis[i]);
            if(dis[i][0]=='*') break;
        }
        ln=strlen(dis[0]);
        if(dis[0][0]=='.' && dis[0][ln-1]=='.')
        {
            for(i=1; i<ln-1; i++)
                if(dis[0][i]=='-')D++;
                else
                    a=1;
        }
        else
            a=1;
        h=(2*D)+3;
        if(a==0)
        {
            for(i=0; i<h; i++)
            {
                if(dis[i][0]=='.' && dis[i][D+1]=='.')
                {
                    if(i%(D+1)!=0)
                    {
                        a=1;
                        break;
                    }
                }
                else if(dis[i][0]=='|' && dis[i][D+1]=='|')continue;
                else
                {
                    a=1;
                    break;
                }
            }
            if(dis[i][0]!='*')
                a=1;
        }
        if(a==0)
            for(i=0; i<h; i++)
            {
                for(j=1; j<=D; j++)
                {
                    if(i==0 || i==(h-1) || i%(D+1)==0)
                    {
                        if(dis[i][j]!='-')
                        {
                            a=1;
                            break;
                        }
                    }
                    else
                    {
                        if(dis[i][j]!='.')
                        {

                            a=1;
                            break;
                        }
                    }
                }
                if(dis[i][j+1]!='\0')
                {
                    a=1;
                    break;
                }
            }
        if(D==0 && dis[1][0]=='|')
            a=1;
        if(a==0)
            printf("Case %d: %d\n",x,D);
        else
            printf("Case %d: Bad\n",x);
        x++;
    }
    return 0;
}
