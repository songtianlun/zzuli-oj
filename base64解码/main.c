#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cDa(char ch);
void dToK(int n, int k, char str[]);
int bToD(char t[]);

int main()
{
    char ch[10000],str[1000],two[10000],a[20],eight[10000];
    int ascii,i,gap,n,j,k;
    i = 0;
    scanf("%s",ch);
    while(ch[i]!='\0')
    {
        str[0] = '\0';
        ascii = cDa(ch[i]);
        dToK(ascii,2,str);
        gap = 8 - strlen(str);
        while(gap--)
            strcat(two,"0");
        strcat(two,str);
        i++;
    }
    j = 0;
    for(i = 0;i<strlen(two)/6;i++)
    {
        n = i*6;
        k = 6;
        eight[j] = '0';
        j++;
        eight[j] = '0';
        j++;
        while(k--)
        {
            eight[j] = two[n];
            j++;
            n++;
        }
        eight[j] = '\0';
    }
    for(i = 0;i<strlen(eight)/8;i++)
    {
        n = i*8;
        k = 8;
        j = 0;
        while(k--)
        {
            a[j] = eight[n];
            j++;
            n++;
        }
        a[j] = '\0';
        printf("base64ÂëÖµ£º%d\n",bToD(a));
    }
    return 0;
}
int cDa(char ch)
{
    int ascii;
    ascii = ch;
    return ascii;
}
void dToK(int n, int k, char str[])
{
    int i,j,len;
    char num,ch;
    for(i=0;n!=0;i++)
    {
        num=n%k+48;
        str[i]=num;
        n=n/k;
    }
    str[i]='\0';
    len=i-1;
    for(j=0,i=len;j<i;j++,i--)
    {
        ch=str[j];
        str[j]=str[i];
        str[i]=ch;
    }
}

int bToD(char t[])
{
    int i,j,d=0,k,two=1,n;
    for(i=strlen(t)-1,j=1;i>=0;i--,j++)
    {
        for(k=j-1;k>0;k--)
            two*=2;
        n=t[i]-48;
        d=d+n*two;
        two=1;

    }

    return d;
}
