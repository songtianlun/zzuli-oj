// ����n��a����a+aa+aaa+��aa��a(n��a)���統n=3,a=2ʱ��2+22+222�Ľ��Ϊ246 //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i,sum,numb;
    scanf("%d%d",&n,&a);
    i=1;
    sum=0;
    numb=0;
    while(i<=n)
    {
        numb=a*pow(10,(i-1))+numb;
        sum=sum+numb;
        i=i+1;
    }
    printf("%d\n",sum);
    return 0;
}
