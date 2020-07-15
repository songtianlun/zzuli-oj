/*有一口深度为high米的水井，井底有一只青蛙，
它每天白天能够沿井壁向上爬up米，夜里则顺井壁向下滑down米，
若青蛙从某个早晨开始向外爬，
对于任意指定的high、up和down值（均为自然数），
计算青蛙多少天能够爬出井口？*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high,up,down,day,pa;
    day=1;
    pa=0;
    scanf("%d%d%d",&high,&up,&down);
    while(pa<high)
    {
        pa=pa+up;
        if(pa==high)break;
        pa=pa-down;
        day=day+1;
    }
    printf("%d\n",day);
    return 0;
}
