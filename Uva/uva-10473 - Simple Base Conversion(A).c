#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 50
char input[max];
char store[17];
int nara[max];
int main()
{
    int num,i,k,ln,j,base;
    double mal;
    char store[16]="0123456789ABCDEF";
    while(scanf("%s",input)!=EOF)
    {
        if(input[0]=='-')break;
        k=num=0;
        if(input[0]=='0' && input[1]=='x')
        {
            ln=strlen(input);
            for(i=2;input[i]!='\0';i++)
            {
                if(input[i]<58)
                    base=input[i]-'0';
                else
                    base=input[i]-55;
                num=num*16+base;
            }
            printf("%d\n",num);
        }
        else
        {
            for(i=0;input[i]!='\0';i++)
                num=num*10+(input[i]-'0');
                while(num)
                {
                    nara[k++]=num%16;
                    num=num/16;
                }
            printf("0x");
            if(k>0)
            for(i=k-1;i>=0;i--)
            {
                printf("%c",store[nara[i]]);
            }
            else
                printf("0");
                printf("\n");
        }
    }
    return 0;
}
