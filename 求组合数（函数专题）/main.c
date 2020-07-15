#include <stdio.h>
#include <stdlib.h>
double multiply(int m);


int main()
{
    int k,m;
    scanf("%d%d",&m,&k);
    printf("%.0f\n",(multiply(m))/((multiply(k))*multiply(m-k)));
    return 0;
}

double multiply(int m)
{
    int i;
    double mu=1;
    for(i=1;i<=m;i++)
        mu=i*mu;
        return mu;
}
