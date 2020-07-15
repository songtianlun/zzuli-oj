//从键盘输入2个整数x、y值，表示平面上一个坐标点，判断该坐标点处于第几象限，并输出相应的结果。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
        printf("1");
    else if(x<0&&y>0)
        printf("2");
    else if(x<0&&y<0)
    printf("3");
    else if(x>0&&y<0)
        printf("4");
    return 0;
}
