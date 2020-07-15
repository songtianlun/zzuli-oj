#include<stdio.h>
#include<string.h>
void reverse(char *str,int len);

int main(void)
{
	char str[100];
	int len;
	gets(str);
	len=strlen(str);
	reverse(&str,len);
	return 0;
}

void reverse(char *str,int len)
{
	int i,k;
	if(str[0]!='-')
	{
		if(*(str+len-1)!='0')
		{
			for(i=len-1;i>=0;i--)
			printf("%c",*(str+i));
		}
		else
		{
			for(i=len-2;i>0;i--)
			{
				if(*(str+i)!='0')
				{
					k=i;break;
				}
			}
			for(i=k;i>=0;i--)
			{

				printf("%c",*(str+i));
			}
			for(i=k+1;i<len;i++)
			printf("%c",*(str+i));
		}

	}
	else
	{
		printf("-");
		if(*(str+len-1)!='0')
		{
			for(i=len-1;i>0;i--)
			printf("%c",*(str+i));
		}
		else
		{
			for(i=len-2;i>0;i--)
			{
				if(*(str+i)!='0')
				{
					k=i;break;
				}
			}
			for(i=k;i>0;i--)
			{

				printf("%c",*(str+i));
			}
			for(i=k+1;i<len;i++)
			printf("%c",*(str+i));
		}
    }
}
