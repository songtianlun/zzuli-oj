/*����һ���ٷ��Ƴɼ�, ����ݰٷ��Ƴɼ�������Ӧ�ĵȼ���ת����ϵ���£�
 90������Ϊ��A����80~89Ϊ��B���� 70~79Ϊ��C���� 60~69Ϊ��D����60������Ϊ��E���� */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d",&x);
    if(x>=90)
        printf("A");
    else if(x>=80&&x<=89)
        printf("B");
    else if(x>=70&&x<=79)
        printf("C");
    else if(x>=60&&x<=69)
        printf("D");
    else
        printf("E");
    return 0;
}
