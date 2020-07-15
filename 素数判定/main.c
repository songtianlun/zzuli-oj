//输入一个正整数n，判断n是否是素数，若n是素数，输出”Yes”,否则输出”No”。 //
#include <stdio.h>
#include <math.h>

int main()
{

int i,m,k,find;

printf("请输入一个整数：\n");
scanf("%d",&m);
k=(int)sqrt(m);
find=0;

for(i=2;i<=k;i++)
{
    if(m%i==0)
    {
        find=1;
        break;
    }
}
    if(find==1||m==1)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
