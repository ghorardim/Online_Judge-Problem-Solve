#include<stdio.h>
#include<string.h>
#define max 101
int main()
{
  char fb[max][max];
  int i,j,n,m,count,x=1;
  while(scanf("%d%d",&n,&m))
  {
      if(n==0 && m==0)break;
      for(i=0;i<n;i++)
        scanf("%s",fb[i]);
        if(x>1)printf("\n");
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              count=0;
              if(fb[i][j]=='*')
                continue;
              else
              {
                  if(j<m && fb[i][j+1]=='*')
                    count++;
                if(j>0 && fb[i][j-1]=='*')
                    count++;
                if(i<n-1 && fb[i+1][j]=='*')
                    count++;
                if(i>0 && fb[i-1][j]=='*')
                    count++;
                if((i>0 && j<m-1)&& fb[i-1][j+1]=='*')
                    count++;
                if((i>0 && j>0)&& fb[i-1][j-1]=='*')
                    count++;
                if((i<n-1 && j<m-1)&& fb[i+1][j+1]=='*')
                    count++;
                if((i<n-1 && j>0)&& fb[i+1][j-1]=='*')
                    count++;
                fb[i][j]=count+'0';
              }
          }
      }
      printf("Field #%d:\n",x);
      for(i=0;i<n;i++)
        printf("%s\n",fb[i]);
        x++;
  }
   return 0;
}
