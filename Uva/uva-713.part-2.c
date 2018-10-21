#include<stdio.h>
#include<string.h>
#define max 205
int main()
{
    char str2[max],str1[max],str3[max];
    int i,n,a,N,sum,k,ln1,ln2,large,small,b;
    scanf("%d",&N);
    while(N--)
    {
       b=0;
       scanf("%s%s",str1,str2);
       ln1=strlen(str1);
       ln2=strlen(str2);
       if(ln1>ln2)
         a=1;
       else if(ln2>ln1)
        a=2;
       else a=0;
       if(a==1)
       {
           for(i=0;i<ln1;i++)
           {
               if(i<ln2)
               {
                   n=(str1[i]-'0')+(str2[i]-'0')+b;
                   if(n>9)
                   {
                      str3[i]=(n%10)+'0'; b=1;
                   }
                   else
                   {
                       str3[i]=n+'0'; b=0;
                   }
               }
               else
               {
                   if(b==1)
                   {
                       n=(str1[i]-'0')+b;
                       if(n>9)
                       {
                           str3[i]=(n%10)+'0'; b=1;
                       }
                       else
                       {
                           str3[i]=n+'0'; b=0;
                       }
                   }
                   else str3[i]=str1[i];
               }
           }
       }
       else if(a==2)
        {
           for(i=0;i<ln2;i++)
           {
               if(i<ln1)
               {
                   n=(str2[i]-'0')+(str1[i]-'0')+b;
                   if(n>9)
                   {
                      str3[i]=(n%10)+'0'; b=1;
                   }
                   else
                   {
                       str3[i]=n+'0'; b=0;
                   }
               }
               else
               {
                   if(b==1)
                   {
                       n=(str2[i]-'0')+b;
                       if(n>9)
                       {
                           str3[i]=(n%10)+'0'; b=1;
                       }
                       else
                       {
                           str3[i]=n+'0'; b=0;
                       }
                   }
                   else str3[i]=str2[i];
               }
           }
       }
       else
       {
           for(i=0;i<ln1;i++)
           {
               n=(str2[i]-'0')+(str1[i]-'0')+b;
               if(n>9)
               {
                   str3[i]=(n%10)+'0'; b=1;
               }
               else
               {
                   str3[i]=n+'0'; b=0;
               }
           }
       }
       if(b==1) str3[i++]='1';
       str3[i]='\0';
       for(i=0;str3[i]!='\0';i++)
       {
           if(str3[i]=='0' && b==1) continue;
           printf("%c",str3[i]);
           b=0;
       }
       printf("\n");

    }
    return 0;
}

