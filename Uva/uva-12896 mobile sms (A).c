#include<stdio.h>
#include<string.h>
#define max 5
#define maxi 11
#define len 101
int main()
{
    int num[len],numtimes[len],T,L,i;
    char str[maxi][max];
    scanf("%d",&T);
    str[1][1]='.';
    str[1][2]=',';
    str[1][3]='?';
    str[1][4]='"';
    str[2][1]='a';
    str[2][2]='b';
    str[2][3]='c';
    str[3][1]='d';
    str[3][2]='e';
    str[3][3]='f';
    str[4][1]='g';
    str[4][2]='h';
    str[4][3]='i';
    str[5][1]='j';
    str[5][2]='k';
    str[5][3]='l';
    str[6][1]='m';
    str[6][2]='n';
    str[6][3]='o';
    str[7][1]='p';
    str[7][2]='q';
    str[7][3]='r';
    str[7][4]='s';
    str[8][1]='t';
    str[8][2]='u';
    str[8][3]='v';
    str[9][1]='w';
    str[9][2]='x';
    str[9][3]='y';
    str[9][4]='z';
    str[0][1]=' ';
    while(T--)
    {
        scanf("%d",&L);
        for(i=0;i<L;i++)
            scanf("%d",&num[i]);
        for(i=0;i<L;i++)
            scanf("%d",&numtimes[i]);
        for(i=0;i<L;i++)
            printf("%c",str[num[i]][numtimes[i]]);
        printf("\n");
    }
    return 0;
}
