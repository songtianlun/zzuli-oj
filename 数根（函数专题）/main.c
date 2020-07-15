#include <stdio.h>
#include <stdlib.h>
digitSum(int n);

int main()
{
    int n,root;
    scanf("%d",&n);
    root=digitSum(n);
    printf("%d\n",root);
    return 0;
}

digitSum(int n)
{
    int sum=0;
    re: while(n>0)
    {
        sum=n%10+sum;
        n=n/10;
    }
    if(sum>10)
    {
        n=sum;
        sum=0;
        goto re;
    }

    return sum;
}
