/*输入一批学生的成绩（整数），输出最高分。 
Input
 输入包含多个非负整数和一个负整数。该负数不作为有效成绩，只表示输入结束。 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max;
    max=0;
    while(scanf("%d",&n),n>0)
    {
        if(n>max)
            max=n;
    }
    printf("%d\n",max);
    return 0;
}
