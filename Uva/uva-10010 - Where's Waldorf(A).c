#include<stdio.h>
#include<string.h>
#define max 51
#define maxi 21
int main()
{
    char str[max][max],str1[max],ch;
    int m,n,k,i,j,p,l,a,ln,c,v,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%c",&m,&n,&ch);
        for(i=0; i<m; i++)
            gets(str[i]);
        scanf("%d%c",&k,&ch);
        for(i=0; i<k; i++)
           {
            gets(str1);
            if(str1[0]>64 && str1[0]<96)
            {
            str1[0]=str1[0]+' ';
            }
            for(p=0; p<m; p++)
            {
                a=1;
                for(l=0; l<n; l++)
                {
                    a=1;
                    if(str[p][l]>'@' && str[p][l]<'a')
                        str[p][l]=str[p][l]+' ';
                    if(str1[0]==str[p][l])
                    {
                        a=0;
                        c=p;
                        v=l;
                        ln=strlen(str1);
                        for(j=1; j<ln; j++)
                        {
                            v++;
                            if(v==n)
                            {
                                a=1;
                                break;
                            }
                            if(str[c][v]>'@' && str[c][v]<'a')
                                str[c][v]=str[c][v]+' ';
                            if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(v<0)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(c==m)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(c<0)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(c==m || v==n)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(c==m || v<0)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(c<0 || v<0)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
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
                                if(c<0 || v==n)
                                {
                                    a=1;
                                    break;
                                }
                                if(str[c][v]>'@' && str[c][v]<'a')
                                    str[c][v]=str[c][v]+' ';
                                if(str1[j]!=str[c][v] && str1[j]!=(str[c][v]-' '))
                                {
                                    a=1;
                                    break;
                                }
                            }
                        }
                        if(a==0)
                            printf("%d %d\n",p+1,l+1);

                    }
                    if(a==0)
                        break;
                }
                if(a==0)break;
            }
           }
           if(T!=0)
        printf("\n");
    }
    return 0;
}
