/*����һ���򵥵�����������ʽ����������ʵ����һ������������̼�������
���ʽ�ĸ�ʽΪ��s1 op s2�� s1��s2������ʵ����op��ʾ���������(+,-,*,/)��Ҳ�����������ַ�
���������Ϸ���������ʽ��ֵ������������Ϸ�����г�������ʱ������0�������"Wrong input!"�������С���������λ��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,key;
    char op;

    scanf("%lf %c %lf",&n1,&op,&n2);

    switch(op)
    {
    case '+':
        key=n1+n2;
        printf("%.2f\n",key);break;
    case '-':
        key=n1-n2;
        printf("%.2f\n",key);break;
    case '*':
        key=n1*n2;
        printf("%.2f\n",key);break;
    case '/':
        if(fabs(n2)>1e-10)//����ĸ��Ϊ0//
        {
        key=n1/n2;
        printf("%.2f\n",key);
        }
        else
            printf("Wrong input!\n");
        break;
    default:
        printf("Wrong input!\n");break;

    }
    return 0;
}
