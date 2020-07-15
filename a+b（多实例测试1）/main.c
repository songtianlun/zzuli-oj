/*输入第1行为一个整数n(1≤n≤10)，代表测试的组数。
下面有n组测试数据，每组1行，为2个整数，为A, B。*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int n,a,b;
    int sum[N];
    int i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum[i]=a+b;
    }
   for(i=0;i<n;i++)
   {
       printf("%d\n",sum[i]);
   }
    return 0;
}
