#include <stdio.h>
#include <stdlib.h>
int vowel(char ch);
int main()
{
    char ch;
    int sum=0,answer=0;
    while(ch=getchar(),ch!='\n')
    {
        answer=vowel(ch);
        if(answer==1)
            sum=sum+1;
    }
    printf("%d\n",sum);
    return 0;
}

int vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
        else
        return 0;
}
