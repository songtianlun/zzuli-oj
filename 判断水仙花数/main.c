/* 春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：

“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=13+53+33。

现在要求输入一个三位数，判断该数是否是水仙花数，如果是，输出“yes”，否则输出“no”  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n1,n2,n3;

    scanf("%d",&x);
    n1=x%10;
    n2=(x/10)%10;
    n3=(x/100)%10;
    if(n1*n1*n1+n2*n2*n2+n3*n3*n3==x)
        printf("yes");
    else
        printf("no");
    return 0;
}
