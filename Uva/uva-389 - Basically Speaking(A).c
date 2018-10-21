#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 100
char input[max];
char store[17];
int ans[max];
int main()
{
    int num2,i,base,nebase,key,net,j;
    char store[16]="0123456789ABCDEF";
    while(scanf("%s%d%d",input,&base,&nebase)!=EOF)
    {
        key=num2=0;
        for(i=0;input[i]!='\0';i++)
        {
            if(input[i]<58)
                    net=input[i]-'0';
                else
                    net=input[i]-55;
            num2=num2*base+net;
        }
        i=0;
        if(num2)
        {
        while(num2)
        {
            ans[i++]=(num2%nebase);
            num2=num2/nebase;
            if(i>7)
            {
                key=1;
                break;
            }
        }
        if(key==0)
        {
            for(j=7-i;j>0;j--)
                printf(" ");
            for(i=i-1;i>=0;i--)
                printf("%c",store[ans[i]]);
            printf("\n");
        }
        else
            printf("  ERROR\n");
        }
        else
            printf("      0\n");
    }
    return 0;
}
