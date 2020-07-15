#include <stdio.h>
#include <stdlib.h>
void conv(int n);

int main()
{
    int n;
    scanf("%d",&n);
    conv(n);
    return 0;
}

conv(int n)
{
    int x;
    if(n==0)
        return;
    scanf("%d",&x);
    conv(n-1);
    printf("%d ",x);
}
