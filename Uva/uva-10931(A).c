#include<stdio.h>
#include<stdlib.h>
int fun1(unsigned long long int a);
int fun(unsigned long long int a);
int b;
int main()
{
    unsigned long long int a;
    while(scanf("%llu",&a)!=EOF)
    {
        if(a==0)
            break;
        b=0;
        printf("The parity of ");
        fun1(a);
        printf(" is %d (mod 2).\n",fun(a));
    }
    return 0;
}
int fun1(unsigned long long int a)
{
    int c;
    if(a==0)
        return 0;
    c=a%2;
    a=a/2;
    fun1(a);
    printf("%d",c);
}
int fun(unsigned long long int a)
{
    if(a==0)
        return b;
    b=b+a%2;
    a=a/2;
    return fun(a);
}

