#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z ;

    scanf("%d%d%d",&x,&y,&z);
    printf("%-9d%-9d%-9d\n",x,x*x,x*x*x);
    printf("%-9d%-9d%-9d\n",y,y*y,y*y*y);
    printf("%-9d%-9d%-9d\n",z,z*z,z*z*z);
    return 0;
}
