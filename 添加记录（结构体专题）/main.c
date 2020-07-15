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
    int i,j,n,a;
    STU stu[102],b,sel;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",stu[i].ID);

        scanf("%s",stu[i].name);

        for(j=0;j<3;j++)
            scanf("%d",&stu[i].grade[j]);
    }

    scanf("%s",sel.ID);

    scanf("%s",sel.name);

    for(j=0;j<3;j++)
        scanf("%d",&sel.grade[j]);
    a=1;
    for(i=0;i<n;i++)
    if(strcmp(sel.ID,stu[i].ID)==0)
        a=0;

    if(a==0)
    printf("error!");
    else
    {
        stu[n]=sel;
        for(i=0;i<n;i++)
            for(j=i+1;j<=n;j++)
        {
            if(strcmp(stu[i].ID,stu[j].ID)>0)
                {
                    b=stu[i];
                    stu[i]=stu[j];
                    stu[j]=b;
                }
        }
        for(i=0;i<=n;i++)
    {
        printf("%s %s",stu[i].ID,stu[i].name);
        for(j=0;j<3;j++)
            printf(" %d",stu[i].grade[j]);
        printf("\n");
    }
    }
    return 0;
}
