#include<stdio.h>
#include<string.h>
#include<math.h>
#define max 300
int main()
{
    char str[max];
    int i,j,T,total[max],y,x=1,ln;
    unsigned long long int fact;
    scanf("%d",&T);
    for(i=0;i<max;i++)total[i]=0;
    while(T--)
    {
        fact=1;
        scanf("%s",str);
        ln=strlen(str);
        for(i=0;str[i]!='\0';i++)
        {
            y=str[i];
            total[y+128]++;
        }
        for(i=1;i<=ln;i++)
            fact=fact*i;
        for(i=(65+128);i<=(90+128);i++)
        {
            if(total[i]>1)
            {
                for(j=total[i];j>=2;j--)
                fact=fact/j;
            }
            total[i]=0;
        }
        printf("Data set %d: %llu\n",x,fact);
        x++;
    }
    return 0;
}

