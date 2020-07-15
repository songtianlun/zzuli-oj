#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,minus,multiply,divid,remainder;

    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    minus=num1-num2;
    multiply=num1*num2;
    divid=num1/num2;
    remainder=num1%num2;
    printf("%d %d %d %d %d\n",sum,minus,multiply,divid,remainder);
    return 0;
}
