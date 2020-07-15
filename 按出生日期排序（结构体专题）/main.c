#include <stdio.h>
#include <stdlib.h>

struct date
{
    int year;
    int month;
    int day;
};
struct student
{
    char name[10];
    struct date birth;
};
int main()
{
    struct student b[11],m;
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",b[i].name);
        scanf("%d",&b[i].birth.year);
        scanf("%d",&b[i].birth.month);
        scanf("%d",&b[i].birth.day);
    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        if(b[i].birth.month>b[j].birth.month)
        {
            m=b[i];
            b[i]=b[j];
            b[j]=m;
        }
        else if(b[i].birth.month==b[j].birth.month)
            if(b[i].birth.day>b[j].birth.day)
        {
            m=b[i];
            b[i]=b[j];
            b[j]=m;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%s ",b[i].name);
        printf("%d-",b[i].birth.year);
        printf("%02d-",b[i].birth.month);
        printf("%02d\n",b[i].birth.day);
    }
    return 0;
}
