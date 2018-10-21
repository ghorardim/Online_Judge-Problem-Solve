#include<stdio.h>
#include<math.h>
#define max 1000000
char seive[max];
int prime_list[max];
int main()
{
    char inputS[max];
    double sq;
    unsigned long long int input,half;
    int i,j,k=1,a,b,key;
    for(i=4;i<max;i=i+2)
        seive[i]='1';
    for(i=3;i<1000;i=i+2)
        if(seive[i]!='1')
        for(j=i*i;j<max;j=j+i)
        seive[j]='1';
    for(i=2;i<max;i++)
        if(seive[i]!='1')prime_list[k++]=i;
    while(scanf("%s",inputS)!=EOF)
    {
        if(inputS[0]=='0')break;
        printf("%s = ",inputS);
        if(inputS[0]=='-')
        {
            input=0;
            printf("-1");
            for(i=1;inputS[i]!='\0';i++)
               input=input*10+(inputS[i]-'0');
               sq=sqrt(input)+1;
               key=1;
            for(i=1;input>1;i++)
            {
                while((input%prime_list[i])==0 && input>1)
                {
                    printf(" x %d",prime_list[i]);
                    input=input/prime_list[i];
                    key=2;
                }
                if(prime_list[i]>sq && key==1)
                {
                    printf(" x %d",input);
                    break;
                }
            }
        }
        else
        {
            input=0;
            for(i=0;inputS[i]!='\0';i++)
               input=input*10+(inputS[i]-'0');
               sq=sqrt(input)+1;
               key=1;
            if(input==1)printf("1");
            for(i=1;input>1;i++)
            {
                while((input%prime_list[i])==0 && input>1)
                {
                    printf("%d",prime_list[i]);
                    input=input/prime_list[i];
                    if(input>1)
                        printf(" x ");
                        key=2;
                }
                if(prime_list[i]>sq && key==1)
                {
                    printf("%d",input);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
