//Çó1! + 2! + ¡­¡­n! //
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,n,sum;
    scanf("%d",&n);
    i=1;
    x=1;
    sum=0;
    while(i<=n)
    {
        x=i*x;
        i=i+1;
        sum=sum+x;
    }
    printf("%d\n",sum);
    return 0;
}
