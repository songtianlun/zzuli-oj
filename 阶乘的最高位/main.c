#include <stdio.h>
#include <stdlib.h>

int main()
{
    double multiply,m;
    int n,i;
    multiply=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        multiply=i*multiply;
        for(;multiply>=10;)
            multiply/=10;
    }
    printf("%1.0lf\n",multiply);
    return 0;
}
