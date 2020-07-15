#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, fenpei ,yuxia ;

    scanf("%d %d", &m, &n);
    fenpei = m / n;
    yuxia = m % n;

    printf("%d %d\n", fenpei, yuxia);
    return 0;
}
