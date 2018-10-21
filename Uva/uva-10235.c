#include <stdio.h>
#define lim 1000000
int ar[lim + 10];
int num_rev(int a)
{
    int i, j, k,b=0;
    while(a!=0)
    {
        b=b*10+(a%10);
        a /= 10;
    }
    return b;
}
int main(void)
{
    int i = 1, j, l;
    ar[1]=1;
    for(i=4;i<=1000000;i+=2)ar[i]=1;
    for(i=3;i<=1000;i+=2)
    {
        if(ar[i]==0)
            for(j=i*i;j<=1000000;j+=i)ar[j]=1;
    }
    while (scanf("%d", &i) != EOF)
    {
        if (!ar[i] && i/10)
        {

            j = num_rev(i);
            if (!ar[j] && j!=i)
            {
                ar[i] = 2;
                ar[j] = 2;
            }
        }
        if (!ar[i]) printf("%d is prime.\n", i);
        else if (ar[i] == 2) printf("%d is emirp.\n", i);
        else printf("%d is not prime.\n", i);
    }
    return 0;
}

