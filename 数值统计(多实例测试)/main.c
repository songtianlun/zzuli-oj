#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,i,z,f,zero;  //z整数 f负数 zero 零//
    double n;

    while(scanf("%d",&I),I!=0)
    {
        f=z=zero=n=0;
        for(i=1;i<=I;i++)
        {
            scanf("%lf",&n);
            if(n<0)
                f=f+1;
            else if(n>0)
                z=z+1;
            else
                zero=zero+1;
        }
        printf("%d %d %d\n",f,zero,z);
    }
    return 0;
}
