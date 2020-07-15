#include <stdio.h>
#include <stdlib.h>
int average(char ch);

int main()
{
    char ch;
    int n=0;
    double sum=0;
    while(scanf("%c",&ch)!=EOF)
    {
        n=n+1;
        sum=sum+average(ch);
    }

    printf("%.1f\n",sum/(n-1));
    return 0;
}

int average(char ch)
{
    if(ch=='A')
        return 95;
    else if(ch=='B')
        return 85;
    else if(ch=='C')
        return 75;
    else if(ch=='D')
        return 65;
    else if(ch=='E')
        return 40;
        else
            return 0;

}
