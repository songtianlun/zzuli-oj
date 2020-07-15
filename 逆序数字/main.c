//输入一个int型整数，将其逆序输出，每个数字后有一个空格。 //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    scanf("%d",&n);

    while(n!=0)
    {
        x=n%10;
        n=n/10;
        printf("%d ",x);
    }
    return 0;
}
