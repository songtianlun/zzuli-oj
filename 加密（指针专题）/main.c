#include <stdio.h>
#include <string.h>
void encrypt(char *plain, char *cipher);
void getback(char *cipher);

int main()
{
    char plain[210],cipher[210];
    cipher[0]='\0';
    gets(plain);
    encrypt(plain,cipher);
    getback(cipher);
    puts(cipher);
    return 0;
}

void encrypt(char *plain, char *cipher)
{
    int i,n;
    char ch[10];
    for(i=0;plain[i]!='\0';i++)
    {
        n=plain[i]-24;
        ch[0]=n/10+48;
        ch[1]=n%10+48;
        ch[2]='\0';
        strcat(cipher,ch);
    }
}

void getback(char *cipher)
{
    int i,j;
    char ch;
    for(i=0,j=strlen(cipher)-1;cipher[i]!='\0'&&j>i;i++,j--)
    {
        ch=cipher[i];
        cipher[i]=cipher[j];
        cipher[j]=ch;
    }
}
