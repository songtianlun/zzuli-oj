//����n�������������������������ĳ˻��� //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num,multiply;

    scanf("%d",&n);
    i=1;
    multiply=1;
    while(i<=n)
    {
        scanf("%d",&num);
    if(num%2!=0)
        multiply=num*multiply;
    i=i+1;
    }
    printf("%d\n",multiply);
    return 0;
}
