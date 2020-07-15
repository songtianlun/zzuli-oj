#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char ID[14];
    char name[20];
    int grade[4];
}STU;
int found(STU stu[],int n,char sel[]);

int main()
{
    STU stu[100];
    int n,i,j,a;
    char sel[14];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",stu[i].ID);

        scanf("%s",stu[i].name);

        for(j=0;j<3;j++)
            scanf("%d",&stu[i].grade[j]);
    }
    scanf("%s",sel);
    a=found(stu,n,sel);

    if(a==-1)
        printf("Not Found\n");
    else
    {
        printf("%s %s",stu[a].ID,stu[a].name);
        for(j=0;j<3;j++)
            printf(" %d",stu[a].grade[j]);
        printf("\n");
    }
    return 0;
}

int found(STU stu[],int n,char sel[])
{
    int i,j,answer=1;
    for(i=0;i<n;i++)
    {
        answer=1;
        for(j=0;j<12;j++)
            if(stu[i].ID[j]!=sel[j])
            answer=-1;
            if(answer==1)
                return i;
    }
    return -1;
}
