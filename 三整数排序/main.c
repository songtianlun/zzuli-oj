/*�Ӽ���������������x,y��z�����Ӵ�С��˳��������ǵ�ֵ��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,a,b,c;

    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        a=x;
        b=y;
        c=z;
    }
    else
    {
        a=y;
        b=x;
        c=z;
    }

    if(z>a)
    {
            a=z;
            b=x;
            c=y;

    }

    if(b>c)
    {


        printf("%d %d %d",a,b,c);
    }
    else
    {
        printf("%d %d %d",a,c,b);
    }

    return 0;
}
