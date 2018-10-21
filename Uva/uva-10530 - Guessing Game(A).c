#include<stdio.h>
#include<string.h>
#define max 15
int main()
{
   int n,big,small;
   char str[max],ch;
   big=11;
   small=0;
   while(scanf("%d%c",&n,&ch)!=EOF)
   {
       if(n==0)break;
       gets(str);
       if(str[4]=='h')
       {
           if(big>n)
            big=n;
       }
       else if(str[4]=='l')
       {
           if(small<n)
            small=n;
       }
       else if(str[4]=='t')
       {
           if(n<big && n>small)
            printf("Stan may be honest\n");
           else
            printf("Stan is dishonest\n");
            big=11;
            small=0;
       }
   }
    return 0;
}
