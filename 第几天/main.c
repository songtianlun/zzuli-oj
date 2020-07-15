#include <stdio.h>
#include <stdlib.h>
int GetYearDay(int year, int month, int day);
int IsLeap(int year);



int main()
{
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    printf("%d\n",GetYearDay(year,month,day));
    return 0;
}

int GetYearDay(int year, int month, int day)
{
	int k, leap;
	int tab[2][13] = {
	            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
                };
leap = IsLeap(year);    //判断year是否是闰年
	for (k = 1; k < month; k++)
		day = day + tab[leap][k];   //按第leap行计算
	return day;
}

int IsLeap(int year)
{
    return  ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
