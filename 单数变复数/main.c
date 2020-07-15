#include <stdio.h>
#include <string.h>

int main()
{
    char ch[21];
    int i;
    gets(ch);
    for(i=strlen(ch)-1;i>0;i--)
    {
        if(ch[i]=='y')
        {
            ch[i]='i';
            ch[i+1]='e';
            ch[i+2]='s';
            ch[i+3]='\0';
            break;

        }
        else if(ch[i]=='s'||ch[i]=='x'||(ch[i-1]=='c'&&ch[i]=='h')||(ch[i-1]=='s'&&ch[i]=='h'))
        {
            ch[i+1]='e';
            ch[i+2]='s';
            ch[i+3]='\0';
            break;
        }
        else if(ch[i]=='o')
        {
            ch[i+1]='e';
            ch[i+2]='s';
            ch[i+3]='\0';
            break;
        }
        else
        {
            ch[i+1]='s';
            ch[i+2]='\0';
            break;
        }
    }
    puts(ch);
    return 0;
}
