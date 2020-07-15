#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,ten;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        ten = num % 10;
        while(ten--)
            printf("I am a good ACMer\n");
        printf("\n");
    }
    return 0;
}
