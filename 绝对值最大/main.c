#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,max;
    scanf("%d%d%d",&x,&y,&z);

    if(abs(x)>=abs(y))
    max=x;
    else
    max=y;

    if(abs(z)>abs(max))
    max=z;
    printf("%d\n",max);
    return 0;
}
