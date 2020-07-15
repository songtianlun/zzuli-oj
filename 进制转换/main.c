#include <stdio.h>
#include <stdlib.h>
void two(int n);

int main()
{
    int n;
    scanf("%d",&n);
    two(n);
    if(n==0)
        printf("0\n");
    return 0;
}
two(int n)
{
    int num;
    if(n==0)
        return ;
    num=n%2;
    two(n/2);
    printf("%d",num);
}
