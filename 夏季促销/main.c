/*�̳��ļ�����������500Ԫ���£������ۣ�
����500Ԫ���������ϣ�95�ۣ�
����1000Ԫ���������ϣ�9�ۣ�
����3000Ԫ���������ϣ�85�ۣ�
����5000Ԫ���������ϣ�8�ۡ�
�������ѽ�ȷ���û�ʵ����Ҫ֧������Ŀ��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money;
    double pay;

    scanf("%d",&money);
    if(money<500)
        pay=money;
    else if(money>=500&&money<1000)
        pay=money*0.95;
    else if(money>=1000&&money<3000)
        pay=money*0.9;
    else if(money>=3000&&money<5000)
        pay=money*0.85;
    else if(money>=5000)
        pay=money*0.8;
    printf("%.2f\n",pay);
    return 0;
}
