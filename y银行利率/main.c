/*������1���ڶ��ڴ��������Ϊ2.25%������ΪdepositԪ���Ա�̼��㲢���n���ı���֮�͡�
����һ����������һ��ʵ�����ֱ�����������ʹ���*/

#include <math.h>

int main()
{
    double rate = 0.0225;
    double deposit,capital;
    int n,i;
    i=1;

    scanf("%d" ,&n);
    scanf("%lf" ,&deposit);


    while(i<=n)
    {
        capital = deposit*rate;
        deposit = deposit+capital;
        i=i+1;

    }
    printf("%lf\n",deposit);

    return 0;
}
