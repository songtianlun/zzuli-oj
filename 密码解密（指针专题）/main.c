#include <stdio.h>
#include <string.h>
void decrypt(char *cipher, char *plain);

int main()
{
    char plain[210];
    char cipher[210];
    gets(cipher);
    decrypt(cipher,plain);
    puts(plain);
    return 0;
}

void decrypt(char *cipher, char *plain)
{
    int i,j,a,b;
    char ch;
    for(i=0,j=0;cipher[i]!='\0';i+=2,j++)
    {
        a=cipher[i];
        b=cipher[i+1];
        ch=(a-48)*10+(b-48)+24;
        plain[j]=ch;
    }
    plain[j]='\0';
}
