/*已知xyz+yzz=n，
其中n是一个正整数，x、y、z都是数字（0-9），
编写一个程序求出x、y、z分别代表什么数字。
如果无解，则输出“No Answer”
注意：xyz和yzz表示一个三位数，而不是表示x*y*z和y*z*z。*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,z;
    int answer=0;
    scanf("%d",&n);
    for(x=1;x<=9;x++)
    {
        for(y=1;y<=9;y++)
        {
            for(z=0;z<=9;z++)
            {
                if(x*100+y*10+z+y*100+z*10+z==n)
                {
                    printf("%4d%4d%4d\n",x,y,z);
                    answer=1;
                }
            }
        }
    }
    if (answer==0)
    printf("No Answer\n");
    return 0;
}
