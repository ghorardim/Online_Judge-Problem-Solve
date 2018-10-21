#include<stdio.h>
#include<string.h>
#define MAX 100000
#define max 102
#define maxi 11
int main()
{
    int qn,time,tp[max],slv[max],i,j,N,ch[max][maxi],k=0,a,team,avoid[max],index,lar,lr_time,arr[max],l=0,st[max],n,ext[maxi],r;
    char pla[max][maxi],w,str[max];
    scanf("%d%c",&N,&w);
    getchar();
    n=N;
    for(i=1; i<=100; i++)
    {
        st[i]=avoid[i]=tp[i]=slv[i]=0;
        for(j=1; j<=10; j++)
        {
            pla[i][j]='A';
            ch[i][j]=0;
        }
    }
    while(N!=0)
    {
        team=time=0;
        gets(str);
        for(i=0; str[i]!=32; i++)
            team=(team*10)+(str[i]-'0');
        qn=str[++i]-'0';
        for(i=i+2; str[i]!=32; i++)
            time=(time*10)+(str[i]-'0');
        pla[team][qn]=str[++i];
        if(team>=1)
        {
            st[team]=1;
            if(ch[team][qn]!=67)
            {
                if(pla[team][qn]=='C')
                {
                    slv[team]++;
                    tp[team]=tp[team]+time;
                    ch[team][qn]=67;
                }
                else if(pla[team][qn]=='I')
                    tp[team]=tp[team]+20;
            }
            a=0;
        }
        else
        {
            if(n!=N)
            printf("\n");
            a=1;
            N--;
            for(i=1;i<=100;i++)
            {
                if(avoid[i]==1 || slv[i]==0)continue;
                lar=slv[i];
                lr_time=tp[i];
                index=i;
                for(j=1;j<=100;j++)
                {
                    if(i==j || avoid[j]==1 || slv[j]==0)continue;
                    if(lar<slv[j])
                    {
                        lar=slv[j];
                        index=j;
                    }
                    else if(lar==slv[j])
                    {
                        if(lr_time>tp[j])
                        {
                            lr_time=tp[j];
                            index=j;
                        }
                    }
                }
                arr[l++]=index;
                avoid[index]=1;
            }r=0;
            for(i=1;i<=100;i++)
            {
                if(slv[i]>0 && avoid[i]==0)
                {
                    ext[r++]=i;
                }
            }
            if(slv[ext[0]]>slv[ext[1]])
            {
                arr[l++]=ext[0];
                arr[l]=ext[1];
            }
            else if(slv[ext[0]]==slv[ext[1]])
            {
                if(tp[ext[0]]<=tp[ext[1]])
                {
                    arr[l++]=ext[0];
                    arr[l]=ext[1];
                }
                else
                {
                    arr[l++]=ext[1];
                    arr[l]=ext[0];
                }
            }
            else
            {
                arr[l++]=ext[1];
                arr[l]=ext[0];
            }
            for(i=0;i<=l;i++)
            {
                printf("%d %d %d-hi\n",arr[i],slv[arr[i]],tp[arr[i]]);
            }
            for(i=1; i<=100; i++)
            {
                if(slv[i]==0 && st[i]==1)
                    printf("%d 0 0\n",i);
            }
        }
        if(a==1)
        {
           l=k=0;
            for(i=1; i<=100; i++)
            {
               st[i]=avoid[i]=tp[i]=slv[i]=0;
                for(j=1; j<=10; j++)
                {
                    pla[i][j]='A';
                    ch[i][j]=0;
                }
            }
        }

    }
    return 0;
}

