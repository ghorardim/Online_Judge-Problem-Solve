#include<stdio.h>
#include<string.h>
#define max 128
#define maxi 10000
int main()
{
    char str[max],ch,str2[maxi];
    int y,i;
    str[92]= ']';
    str['1']='`';
    str['2']='1';
    str['3']='2';
    str['4']='3';
    str['5']='4';
    str['6']='5';
    str['7']='6';
    str['8']='7';
    str['9']='8';
    str['0']='9';
    str['-']='0';
    str['=']='-';
    str['W']='Q';
    str['E']='W';
    str['R']='E';
    str['T']='R';
    str['Y']='T';
    str['U']='Y';
    str['I']='U';
    str['O']='I';
    str['P']='O';
    str['[']='P';
    str[']']='[';
    str['S']='A';
    str['D']='S';
    str['F']='D';
    str['G']='F';
    str['H']='G';
    str['J']='H';
    str['K']='J';
    str['L']='K';
    str[';']='L';
    str[39]=';';
    str['X']='Z';
    str['C']='X';
    str['V']='C';
    str['B']='V';
    str['N']='B';
    str['M']='N';
    str[',']='M';
    str['.']=',';
    str['/']='.';
    while(gets(str2))
    {
        for(i=0;str2[i]!='\0';i++)
        {
            if(str2[i]==32)printf(" ");
            else if(str2[i]=='\n')printf("\n");
            else
            {
                y=str2[i];
                printf("%c",str[y]);
            }
        }
        printf("\n");

    }
    return 0;
}

