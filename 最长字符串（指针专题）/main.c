#include <stdio.h>
#include <string.h>
void maxLenStr(char str[], char max[]);

int main()
{
    int i;
    char str[110],max[110];

    for(i=0;str[0]!='*'&&str[1]!='*'&&str[2]!='*'&&str[3]!='*';i++)
    {
        gets(str);
        maxLenStr(str,max);
    }
    printf("%s\n",max);
    return 0;
}
void maxLenStr(char str[], char max[])
{
       if(strlen(str)>strlen(max))
        strcpy(max,str);
    else
    if(strlen(str)==strlen(max))
    {
    if(strcmp(str,max)>0)
        strcpy(max,str);
    }
    else
        ;
}
