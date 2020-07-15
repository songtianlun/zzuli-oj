#include<stdio.h>
#include<string.h>
char str[200001];char str1[100001];char str2[100001];
int main()
{

	while(scanf("%s%s",str,str1)!=EOF)
	{
		if(strlen(str)<strlen(str1))
		{
			printf("no\n");
		}
		else
		{
			strcpy(str2,str);
			strcat(str,str2);
			if(strstr(str,str1)!=NULL)
			printf("yes\n");
			else
			printf("no\n");
		}
	}
	return 0;
}
/* my c
#include <stdio.h>
#include <string.h>
void movie(char *ch,int n);
int judge(char *a,char *b,int n);

int main()
{
    char a[100000],b[100000];
    int i,len,answer=-1;
    while(scanf("%s",a)!=EOF)
    {
        answer=-1;
        getchar();
        gets(b);
        len=strlen(a);
        for(i=0;i<len;i++)
        {
            if(judge(a,b,len)!=1)
                movie(a,len);
            else
            {
                printf("yes\n");
                answer=1;
                break;
            }
        }
        if(answer==-1)
            printf("no\n");
    }
    return 0;
}

void movie(char *ch,int n)
{
    int i;
    char a;
    a=ch[n-1];
    for(i=n-1;i>0;i--)
    {
        ch[i]=ch[i-1];
    }
    ch[0]=a;
    ch[n]='\0';
}

int judge(char *a,char *b,int n)
{
    int i,answer=-1,j;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[0])
            continue;
        else
            for(j=0;b[j]!='\0';)
        {
            if(b[j]!=a[i])
            {
                answer=-1;
                break;
            }
            else
                answer=1;
            j++,i++;
        }
    }
    return answer;
}
*/
