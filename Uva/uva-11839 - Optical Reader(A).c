#include<stdio.h>
#define max 5
int main()
{
    int arr[max],i,a,n,j,ch;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            a=0;
            for(j=0; j<max; j++)
            {
                scanf("%d",&arr[j]);
                if(arr[j]<=127)
                {
                    ch=j;
                    a++;
                }
            }
            if(a==1)
            {
                switch(ch)
                {
                case 0:
                    printf("A\n");
                    break;
                case 1:
                    printf("B\n");
                    break;
                case 2:
                    printf("C\n");
                    break;
                case 3:
                    printf("D\n");
                    break;
                case 4:
                    printf("E\n");
                    break;
                }
            }
            else
                printf("*\n");
        }
    }
    return 0;
}

