#include <stdio.h>
#include <math.h>
int inverse(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",num+inverse(num));
    return 0;
}


int inverse(int num)
{
    int fnum=0;
    int n;
    while(num)
    {
        n=num%10;
        num=num/10;

        fnum=fnum*10+n;
    }
    return fnum;
}
