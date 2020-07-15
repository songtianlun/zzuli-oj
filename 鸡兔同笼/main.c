#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, b, r ;

    scanf("%d%d",&m,&n);
    b = m - ( n - 2 * m ) / 2;
    r = ( n - 2 * m ) / 2 ;
    printf("%d %d\n", b, r );
    return 0;
}
