//��֪ĳλѧ������ѧ��Ӣ��ͼ�����γ̵ĳɼ�����������ſγ̵�ƽ���֡�//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double math, english, computer, average ;

    scanf("%lf%lf%lf", &math, &english, &computer);
    average = (math + english + computer) / 3 ;
    printf("%.2f\n" , average);
    return 0;
}
