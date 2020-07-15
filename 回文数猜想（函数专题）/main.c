#include <stdio.h>
#include <stdlib.h>
int inverse(int n);

int main()
{
    int n,sum,back;
    scanf("%d",&n);
    while(back=inverse(n),back!=n)
    {
        printf("%d ",n);
        n=n+inverse(n);
    }
    printf("%d",back);
    return 0;
}

int inverse(int n)
{
int temp=0;
while(n>0)
{
    temp=temp*10+n%10;
    n/=10;
}
    return temp;
}
