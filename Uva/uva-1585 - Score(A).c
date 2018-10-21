#include<stdio.h>
#include<string.h>
int main()
{
    char ch,c;
    int i,T,count,sum;
    scanf("%d%c",&T,&c);
    sum=count=0;
    i=1;
    while(count<T)
    {
        scanf("%c",&ch);
        if(ch=='O')
        {
            sum=sum+ i++;
        }
        else if(ch=='X')
            i=1;
        else if(ch=='\n')
        {
            printf("%d\n",sum);
            sum=0;
            i=1;
            count++;
        }
    }
    return 0;
}
