//����n��n��ѧ���ɼ�(ʵ����������������ʡ�//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,grade;
    double percentn;

    scanf("%d",&n);
    i=1;
    percentn=0;
    while(i<=n)
    {
        scanf("%d",&grade);
    if(grade<60)
        percentn=percentn+1;
    i=i+1;
    }
    printf("%.2f\n",(percentn)/n);
    return 0;
}
