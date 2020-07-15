#include <stdio.h>
int gcd(int m,int n);
int lcm(int m,int n);
int main()
{
    int m,n,s,p;
    scanf("%d %d",&m,&n);
    s=gcd(m,n);
    p=lcm(m,n);
    printf("%d %d\n",s,p);
    return 0;
}
int gcd(int m,int n)
{
    if(m%n==0)
        return n;
    else
        return gcd(n,m%n);
}
int lcm(int m,int n)
{
    int p;
    if(m==n)
      return n;
    else
    p=m*n/gcd(m,n);
    return p;
}
