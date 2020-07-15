#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[51];int i=0;int f=1;
	gets(str);
	int length = strlen(str);
	if(str[i]!='_'&&!isalpha(str[i]))
	{
	    printf("no");return 0;
	}
	for(i=0;i<length;i++)
    {
		if(isdigit(str[i]));
		else if(isalpha(str[i]));
		else if(str[i]=='_');
		else
		{
			printf("no");
			return 0;
        }
	}
	printf("yes");
	return 0;
}
