/*输入一个整数，判断该数是奇数还是偶数。
如果该数是奇数就输出“odd”，偶数就输出“even”（输出不含双引号）。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    scanf("%d",&num);
    if(num%2==0)
    {

        printf("even");
    }
    else
    {

        printf("odd");
    }
    return 0;
}
