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
    int i,j,n;
    STU stu[102],b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        stu[i].grade[3]=0;
        scanf("%s",stu[i].ID);

        scanf("%s",stu[i].name);

        for(j=0;j<3;j++)
        {
            scanf("%d",&stu[i].grade[j]);
        stu[i].grade[3]+=stu[i].grade[j];
        }
    }

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {
        if(stu[i].grade[3]<stu[j].grade[3])
        {
            b=stu[i];
            stu[i]=stu[j];
            stu[j]=b;
        }
        else if(stu[i].grade[3]==stu[j].grade[3])
            if(strcmp(stu[i].name,stu[j].name)>0)
        {
            b=stu[i];
            stu[i]=stu[j];
            stu[j]=b;
        }
    }

        for(i=0;i<n;i++)
        {
            printf("%s %s",stu[i].ID,stu[i].name);
            for(j=0;j<=3;j++)
            printf(" %d",stu[i].grade[j]);
            printf("\n");
        }
    return 0;
}
