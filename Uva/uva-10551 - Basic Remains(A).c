#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 1001
char input[max];
char input2[11];
int ans[10];
int main()
{
    int num2,i,base,num1;
    while(scanf("%d",&base))
    {
        num1=num2=0;
        if(base==0)break;
        scanf("%s%s",input,input2);
        for(i=0;input2[i]!='\0';i++)
            num2=num2*base+(input2[i]-'0');
        for(i=0;input[i]!='\0';i++)
            num1=(num1*base+(input[i]-'0'))%num2;
        i=0;
        if(num1)
        {
        while(num1)
        {
           ans[i++]=num1%base;
           num1=num1/base;
        }
        for(i=i-1;i>=0;i--)
            printf("%d",ans[i]);
            printf("\n");
        }
        else
            printf("0\n");
    }
    return 0;
}
