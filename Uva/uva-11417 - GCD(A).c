#include<stdio.h>
int main()
{
   int i,j,N,G,k;
   while(scanf("%d",&N))
   {
       G=0;
       if(N==0)break;
       for(i=1;i<N;i++)
       {
           for(j=i+1;j<=N;j++)
           {
               for(k=j; ;k=k+j)
                if(k%i==0)break;
               G=G+((i*j)/k);
           }
       }
       printf("%d\n",G);
   }
    return 0;
}
