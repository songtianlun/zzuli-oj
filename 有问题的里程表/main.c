/*Description
某辆汽车有一个里程表，该里程表可以显示一个整数，为该车走过的公里数。然而这个里程表有个毛病：
它总是从3变到5，而跳过数字4，里程表所有位（个位、 十位、百位等）上的数字都是如此。
例如，如果里程表显示339,汽车走过1公里之后，该里程表显示350。
Input
输入一个整数num，表示里程表显示的数值，1 < num < 1000，且一定不含整数4。
Output
输出一个整数，为该汽车实际行驶的公里数。例如，如果该里程表显示55，则实际走过的公里 数是40。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i=0,real=0,g,s,b;
    scanf("%d",&num);

    while(i<num)
    {
        i=i+1;
        g=i%10;
        s=(i/10)%10;
        b=(i/100)%10;
        if(g==4)
            g=5;
        if(s==4)
            s=5;
        if(b==4)
            b=5;
        i=b*100+s*10+g;
        real=real+1;

    }

    printf("%d\n",real);
    return 0;
}
