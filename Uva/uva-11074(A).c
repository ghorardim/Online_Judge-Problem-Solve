#include<stdio.h>
#include<string.h>
#define max 1000
#define maxi 23
int main()
{
   char vl[max],hl[maxi],ss[maxi];
   int i,j,n,S,T,N,k,x=1;
   while(scanf("%d%d%d",&S,&T,&N))
   {
       if(S==0 && T==0 && N==0) break;
       n=(S+T)*N+T;
       for(i=0;i<n;i++)
        vl[i]='*';
        vl[i]='\0';
       for(i=0;i<T;i++)
        hl[i]='*';
        hl[i]='\0';
       for(i=0;i<S;i++)
        ss[i]='.';
        ss[i]='\0';
        printf("Case %d:\n",x);
       for(i=0;i<N;i++)
       {
           for(j=0;j<T;j++)
            printf("%s\n",vl);
           for(j=0;j<S;j++)
           {
              for(k=0;k<N;k++)
                printf("%s%s",hl,ss);
                printf("%s\n",hl);
           }
       }
       for(i=0;i<T;i++)
        printf("%s\n",vl);
        x++;
        printf("\n");
   }
   return 0;
}

