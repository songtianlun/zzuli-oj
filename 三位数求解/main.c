/*��֪xyz+yzz=n��
����n��һ����������x��y��z�������֣�0-9����
��дһ���������x��y��z�ֱ����ʲô���֡�
����޽⣬�������No Answer��
ע�⣺xyz��yzz��ʾһ����λ���������Ǳ�ʾx*y*z��y*z*z��*/
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
