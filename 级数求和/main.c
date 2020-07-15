/*已知：Sn= 1＋1／2＋1／3＋…＋1／n。显然对于任意一个整数K，当n足够大的时候，Sn大于K。
现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。
键盘输入 k
Output
屏幕输出 n*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i;
    double sum=0.0;
    scanf("%d",&k);
    if(k>=1&&k<=15)
    {
    for(i=1;sum<=k;)
    {
        sum=sum+1.0/i;
        i=i+1;
    }
    }
    printf("%d\n",i-1);
    return 0;
}
