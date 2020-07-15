#include <stdio.h>
#include <math.h>

int main()
{
    int N,n,x1,x2,y1,y2,subtract;
    scanf("%d",&N);
    wihle(N--)
    {
        scanf("%d%d%d%d%d",&n,&x1,&y2,&x2,&y2);
        subtract = abs(x1-x2)+abs(y1-y2);
        if(x1 == x2)
        {
            if(n>abs(y1-y2)&&n%2==1)
            {
                printf("1")
            }
        }
        if(y1 == y2)
        {

        }

    }
    printf("Hello world!\n");
    return 0;
}
