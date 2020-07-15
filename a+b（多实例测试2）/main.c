//输入数据有多组。 每组一行，为整数A, B。//
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int a,b,j;
    int sum[N];
    int i=0;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        sum[i]=a+b;
        i=i+1;
    }
   for(j=0;j<i;j++)
   {
       printf("%d\n",sum[j]);
   }
    return 0;
}
