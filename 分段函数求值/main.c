/*已知：y是x的函数,
 当x<-2时，y=7-2x；
 当x>=-2,且x<3时，y=5-|3x+2|；
 当x>=3时，y=3x+4 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d",&x);

    if(x<-2)
        y=7-2*x;
    else if(x>=-2&&x<3)
        y=5-abs(3*x+2);
    else
        y=3*x+4;

    printf("%d\n",y);
    return 0;
}
