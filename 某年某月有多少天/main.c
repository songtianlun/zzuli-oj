/*给你一个年份和月份，求该月有多少天
一个年份（正整数），一个月份（1-12），中间有一个空格隔开*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,month;
    scanf("%d%d",&year,&month);

    switch(month)
    {
    case 4:
    case 6:
    case 9:
    case 11:printf("30\n");break;
    case 2:
        if((year%400 == 0)||(year%4 == 0)&&(year%100 != 0))
            printf("29\n");
        else
            printf("28\n");
        break;
        default:printf("31\n");
    }
    return 0;
}
