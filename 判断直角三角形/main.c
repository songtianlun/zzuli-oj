//输入三个正整数，判断用这三个整数做边长是否能构成一个直角三角形。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a);

    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
    printf("Yes");

    else
    printf("No");
    return 0;
}
