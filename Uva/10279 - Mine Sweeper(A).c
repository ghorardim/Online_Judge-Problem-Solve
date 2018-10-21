#include<stdio.h>
#include<string.h>
#define max 11
int main()
{
    int T,i,j,n,a,arr[max][max],count;
    char fb[max][max],str[max][max],ch,nfb[max][max];
    scanf("%d",&T);
    while(T--)
    {
        ch='.';
        scanf("%d",&n);
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                arr[i][j]=0;
        for(i=0; i<n; i++)
            scanf("%s",fb[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(fb[i][j]=='*')
                    arr[i][j]=1;
            }
        }
        for(i=0; i<n; i++)
            scanf("%s",str[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(str[i][j]=='x' && arr[i][j]==1)
                    ch='*';
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                count=0;
                if(str[i][j]=='.' && fb[i][j]=='.')
                {
                    nfb[i][j]='.';
                }
                else if(fb[i][j]=='*')
                {
                    nfb[i][j]=ch;
                }
                else
                {
                    if(j<n && fb[i][j+1]=='*')
                        count++;
                    if(j>0 && fb[i][j-1]=='*')
                        count++;
                    if(i<n-1 && fb[i+1][j]=='*')
                        count++;
                    if(i>0 && fb[i-1][j]=='*')
                        count++;
                    if((i>0 && j<n-1)&& fb[i-1][j+1]=='*')
                        count++;
                    if((i>0 && j>0)&& fb[i-1][j-1]=='*')
                        count++;
                    if((i<n-1 && j<n-1)&& fb[i+1][j+1]=='*')
                        count++;
                    if((i<n-1 && j>0)&& fb[i+1][j-1]=='*')
                        count++;
                    nfb[i][j]=count+'0';
                }
            }
            nfb[i][j]='\0';
        }
        for(i=0;i<n;i++)
        printf("%s\n",nfb[i]);
        if(T!=0)printf("\n");
    }
    return 0;
}
