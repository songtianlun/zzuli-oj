/*给定一个百分制成绩, 请根据百分制成绩输出其对应的等级。转换关系如下：
 90分以上为’A’，80~89为’B’， 70~79为’C’， 60~69为’D’，60分以下为’E’。 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d",&x);
    if(x>=90)
        printf("A");
    else if(x>=80&&x<=89)
        printf("B");
    else if(x>=70&&x<=79)
        printf("C");
    else if(x>=60&&x<=69)
        printf("D");
    else
        printf("E");
    return 0;
}
