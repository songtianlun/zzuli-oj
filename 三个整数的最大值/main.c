/*�Ӽ���������������x,y��z�����������������*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,max;

    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        max=x;
    }
    else
    {
        max=y;
    }
    if(max>z)
    {
        max=max;
    }
    else
    {
        max=z;
    }
    printf("%d\n",max);
    return 0;
}
