//����һ��������n���ж�n�Ƿ�����������n�������������Yes��,���������No���� //
#include <stdio.h>
#include <math.h>

int main()
{

int i,m,k,find;

printf("������һ��������\n");
scanf("%d",&m);
k=(int)sqrt(m);
find=0;

for(i=2;i<=k;i++)
{
    if(m%i==0)
    {
        find=1;
        break;
    }
}
    if(find==1||m==1)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
