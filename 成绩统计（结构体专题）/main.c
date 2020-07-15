#include <stdio.h>
#include <stdlib.h>
struct person
{
    char id[20];
    char name[24];
    int grade1;
    int grade2;
    int grade3;
    int sum;
};

int main()
{
    struct person student,first;
    int n,i,max=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",student.id);
        scanf("%s",student.name);
        scanf("%d",&student.grade1);
        scanf("%d",&student.grade2);
        scanf("%d",&student.grade3);
        student.sum=student.grade1+student.grade2+student.grade3;
        if(student.sum>max)
        {
            first=student;
            max=student.sum;
        }
    }
    printf("%s ",first.id);
    printf("%s ",first.name);
    printf("%d ",first.grade1);
    printf("%d ",first.grade2);
    printf("%d",first.grade3);
    return 0;
}
