#include<stdio.h>
#include<string.h>
#define max 10
int main()
{
    char str[max];
    int T,ln;
    scanf("%d",&T);
    while(T--)
    {
       scanf("%s",str);
       ln=strlen(str);
       if(ln==5)
            printf("3\n");
       else
       {
           if(str[0]=='o' && str[1]=='n')
            printf("1\n");
           else if(str[0]=='o' && str[2]=='e')
            printf("1\n");
           else if(str[1]=='n' && str[2]=='e')
            printf("1\n");
           else
            printf("2\n");
       }
    }
    return 0;
}
