//������������m��n�����m~n�������������������ż����ƽ�����Լ�����������������//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,x,y;
    x=0;
    y=0;
    scanf("%d%d",&m,&n);
    while(n>=m)
    {
        if(m%2==0)
        x=x+m*m;
        else
        y=y+m*m*m;
        m=m+1;
    }
    printf("%d %d\n",x,y);
    return 0;
}
