/*��֪��Sn= 1��1��2��1��3������1��n����Ȼ��������һ������K����n�㹻���ʱ��Sn����K��
�ָ���һ������K��1<=k<=15����Ҫ������һ����С��n��ʹ��Sn��K��
�������� k
Output
��Ļ��� n*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i;
    double sum=0.0;
    scanf("%d",&k);
    if(k>=1&&k<=15)
    {
    for(i=1;sum<=k;)
    {
        sum=sum+1.0/i;
        i=i+1;
    }
    }
    printf("%d\n",i-1);
    return 0;
}
