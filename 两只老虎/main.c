#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c;
    int sum,near,ntail;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum = c / 4;
        near = sum - a/2;
        ntail = sum - b;
        printf("%d\n",sum - near - ntail);
    }
    return 0;
}
