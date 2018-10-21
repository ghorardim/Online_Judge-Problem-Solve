#include<stdio.h>
#include<string.h>
int main()
{
   char ch,st;
   int ln,a=1,i,b=1,c;
   while(scanf("%c",&ch)!=EOF)
   {
      if(a==1 && (ch>=65 && ch<=122))
      {
          if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
            {
            printf("%c",ch);
            c=1;
            }
          else
            {
            st=ch;
            b=0;
            c=1;
            }
          a=0;
      }
      else
      {
        if(ch>=65 && ch<=122)
        {
            printf("%c",ch);
            c=1;
        }
        else
        {
           if(c==1 && b==0)
           {
                printf("%cay",st);
                b=1;c=0;
           }
           else if(c==1)
           {
               printf("ay");
               c=0;
           }
           printf("%c",ch);
           a=1;
        }
      }
   }
    return 0;
}

