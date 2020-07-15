//给你三个正整数，判断用这三个整数做边长是否能构成一个三角形。//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    printf("Yes");
    else
        printf("No");
    return 0;
}
