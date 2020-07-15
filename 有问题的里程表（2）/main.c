#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	int n,m,i,sum=0;
	scanf("%d",&n);
    for(i = 0;i < 9;i++)
    {
        m = n%10;
        if(m>4)
            sum += (m-1)*pow(9,i);
        else
            sum += m*pow(9,i);
        n = n/10;
    }
    printf("%d",sum);
    return 0;


}
