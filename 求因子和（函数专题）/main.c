#include <stdio.h>
#include <stdlib.h>
int FacSum(int i,int n);


int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+FacSum(i,n);
    }
    printf("%d\n",sum);
    return 0;
}

int FacSum(int i,int n)
{
    if(n%i==0)
    return i;
    else
        return 0;
}
