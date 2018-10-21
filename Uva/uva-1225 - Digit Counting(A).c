#include<stdio.h>
#include<math.h>
#define max 11
int main()
{
    int arr[max],T,i,n,b,c;
    scanf("%d",&T);
    while(T--)
    {
        for(i=0;i<10;i++)
            arr[i]=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            c=i;
            while(c)
            {
                b=c%10;
                arr[b]++;
                c=c/10;
            }
        }
        for(i=0;i<10;i++)
        {
            printf("%d",arr[i]);
            if(i<9)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
