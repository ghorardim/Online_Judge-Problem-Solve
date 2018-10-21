#include<stdio.h>
#include<string.h>
#define max 51
#define maxi 21
int main()
{
    char str[max][max],str1[maxi][max],ch;
    int m,n,k,i,j,p,l,a,ln,c,v,T,ar1[10000],ar2[10000],s[1000],e,f,g,h;
    e=f=g=h=0;
    scanf("%d",&T);
    printf("\n");
    while(T--)
    {
        scanf("%d%d%c",&m,&n,&ch);
        for(i=0; i<m; i++)
            gets(str[i]);
        scanf("%d%c",&k,&ch);
        s[e++]=k;
        for(i=0; i<k; i++)
            gets(str1[i]);
        for(i=0; i<k; i++)
        {
            if(str1[i][0]>64 && str1[i][0]<96)
            {
            str1[i][0]=str1[i][0]+' ';
            }
            for(p=0; p<m; p++)
            {
                a=1;
                for(l=0; l<n; l++)
                {
                    a=1;
                    if(str[p][l]>'@' && str[p][l]<'a')
                        str[p][l]=str[p][l]+' ';
                    if(str1[i][0]==str[p][l])
                    {
                        a=0;
                        c=p;
                        v=l;
                        ln=strlen(str1[i]);
                        for(j=1; j<ln; j++)
                        {
                            v++;
                            if(str[c][v]>'@' && str[c][v]<'a')
                                str[c][v]=str[c][v]+' ';
                            if(str1[i][j]!=str[c][v])
                            {
                                a=1;
                                break;
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                v--;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                c++;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                c--;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                c++;
                                v++;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                c++;
                                v--;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                c--;
                                v--;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==1)
                        {
                            c=p;
                            v=l;
                            a=0;
                            for(j=1; j<ln; j++)
                            {
                                c--;
                                v++;
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[i][j]!=str[c][v])
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==0)
                        {
                         ar1[f++]=p+1;
                         ar2[g++]=l+1;
                        }
                    }
                    if(a==0)
                        break;
                }
                if(a==0)break;
            }
        }
        printf("\n");
    }
    for(i=0;i<g;i++)
    {
        if(i==s[h])
        {
            printf("\n");
            h++;
        }
        printf("%d %d\n",ar1[i],ar2[i]);
    }
    return 0;
}

