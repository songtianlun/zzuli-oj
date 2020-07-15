/*从键盘输入三个整数x,y和z，求出其中最大的数。*/
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
