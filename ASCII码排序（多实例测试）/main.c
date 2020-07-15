#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ch,c1,c2,c3;
    while(scanf("%c%c%c",&c1,&c2,&c3)!=EOF)
    {
            if(c2>c1&&c3>c2)
            {
                printf("%c %c %c",c1,c2,c3);
            }
            if(c3>c1&&c2>c3)
            {
                printf("%c %c %c",c1,c3,c2);
            }
            if(c1>c2&&c3>c1)
            {
                printf("%c %c %c",c2,c1,c3);
            }
            if(c3>c2&&c1>c3)
            {
                printf("%c %c %c",c2,c3,c1);
            }
            if(c2>c3&&c1>c2)
            {
                printf("%c %c %c",c3,c2,c1);
            }
            if(c1>c3&&c2>c1)
            {
                printf("%c %c %c",c3,c1,c2);
            }
    }

    return 0;
}
