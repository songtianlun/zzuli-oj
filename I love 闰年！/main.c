//根据一个年份，判断是否是闰年。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d",&x);
    if((x%400 == 0)||(x%4 == 0)&&(x%100 != 0))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
