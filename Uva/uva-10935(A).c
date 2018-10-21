#include<stdio.h>
#include<string.h>
#define max 51
int main()
{
    int N,i,j,AR[max],a,ln,k;
    char mn[max],ch[max];
    while(scanf("%d",&N))
    {
        if(N==0)break;
        j=k=0;
        a=1;
        for(i=0;i<N;i++)
            mn[i]=(i+1)+'0';mn[i]='\0';
        ln=strlen(mn);
        while(ln>1)
        {
            for(i=0;mn[i]!='\0';i++)
            {
                if(a==1)
                {
                    AR[k++]=mn[i]-'0';
                    a=0;
                }
                else
                {
                    ch[j++]=mn[i];
                    a=1;
                }
            }
            ch[j]='\0';
            strcpy(mn,ch);
            ln=strlen(mn);
            j=0;
        }
        printf("Discarded cards:");
        for(i=0;i<N-2;i++)
            printf(" %d,",AR[i]);
            if(N>1)printf(" %d",AR[i]);
        printf("\nRemaining card: %d\n",mn[0]-'0');
    }
    return 0;
}
