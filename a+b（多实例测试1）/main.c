/*�����1��Ϊһ������n(1��n��10)��������Ե�������
������n��������ݣ�ÿ��1�У�Ϊ2��������ΪA, B��*/
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
