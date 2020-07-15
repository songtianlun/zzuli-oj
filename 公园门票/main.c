#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double money;

    scanf("%d",&n);
    if(n>=30)
    {
        money=n*48;
        printf("%.2f",money);
    }
    else
    {
        money=n*50;
    printf("%.2f",money);
    }
    return 0;
}
