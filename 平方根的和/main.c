/*���еĵ�һ��Ϊitem���Ժ����Ϊǰһ���ƽ�����������е�ǰn��ĺ͡�
����������item��item<10000����n(n<1000)��ɣ�item��n�ĺ�����ǰ������
��������еĺͣ�ռһ�У�Ҫ�󾫶ȱ���2λС����*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double item,sum;
    i=1;
    scanf("%lf%d",&item,&n);
    sum=item;
    while(i<=(n-1))
    {
    item=pow(item,1/2.0);
     sum=sum+item;
     i=i+1;
    }
    printf("%.2f\n",sum);
    return 0;
}
