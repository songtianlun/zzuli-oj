/*��һ�����Ϊhigh�׵�ˮ����������һֻ���ܣ�
��ÿ������ܹ��ؾ���������up�ף�ҹ����˳�������»�down�ף�
�����ܴ�ĳ���糿��ʼ��������
��������ָ����high��up��downֵ����Ϊ��Ȼ������
�������ܶ������ܹ��������ڣ�*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int high,up,down,day,pa;
    day=1;
    pa=0;
    scanf("%d%d%d",&high,&up,&down);
    while(pa<high)
    {
        pa=pa+up;
        if(pa==high)break;
        pa=pa-down;
        day=day+1;
    }
    printf("%d\n",day);
    return 0;
}
