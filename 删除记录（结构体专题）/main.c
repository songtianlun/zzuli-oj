#include <stdio.h>
#include <string.h>
typedef struct student
{
    char ID[14];
    char name[22];
    int grade[4];
}STU;

int main()
{
    int i,j,n,a=-1;
    STU stu[102],sel;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",stu[i].ID);

        scanf("%s",stu[i].name);

        for(j=0;j<3;j++)
            scanf("%d",&stu[i].grade[j]);
    }
    scanf("%s",sel.ID);

    for(i=0;i<n;i++)
        if(strcmp(sel.ID,stu[i].ID)==0)
            a=i;

    if(a==-1)
    printf("error!");
    else
    {

        for(i=0;i<n;i++)
        {
            if(i!=a)
                {
                 printf("%s %s",stu[i].ID,stu[i].name);
                 for(j=0;j<3;j++)
                 printf(" %d",stu[i].grade[j]);
                 printf("\n");
                 }
        }
    }
    return 0;
}
