#include <stdio.h>
int HmsToS(int h,int m,int s);
void PrintTime(int s);

int main(void)
{
    int h1,m1,s1,h2,m2,s2;
    while(scanf("%d:%d:%d",&h1,&m1,&s1)!=EOF&&scanf("%d:%d:%d",&h2,&m2,&s2)!=EOF)
    {
    PrintTime(HmsToS(h2,m2,s2)-HmsToS(h1,m1,s1));
    }
    return 0;
}

int HmsToS(int h, int m, int s)
{
    return h*3600+m*60+s;
}

void PrintTime(int s)
{
     int h,m,ss;
     h=s/3600;
     m=(s-h*3600)/60;
     ss=s-h*3600-m*60;
     printf("%02d:%02d:%02d\n",h,m,ss);
}
