#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct note
{
    char ID[14];
    char name[20];
    int grade[4];
    struct note *next;
};
typedef struct note LNode,*LinkList;

int main()
{
    LinkList head,sel;
    LinkList p,real;
    int n,i,j,a;
    a=1;

    head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL;

    scanf("%d",&n);
    real = head;
    for(i=0;i<n;i++)
    {
        p=(LinkList)malloc(sizeof(LNode));

        scanf("%s",p->ID);

        scanf("%s",p->name);

        for(j=0;j<3;j++)
            scanf("%d",&p->grade[j]);
        real->next=p;
        real=p;
    }
    real->next = NULL;

    sel=(LinkList)malloc(sizeof(LNode));
    scanf("%s",sel->ID);
    scanf("%s",sel->name);
    for(j=0;j<3;j++)
        scanf("%d",&sel->grade[j]);

    real=head->next;
    p=head;
    if(strcmp(real->ID,sel->ID)>0)
    {
        sel->next=real;
        p->next=sel;
        a=-1;
    }
    while(a==1&&i--)
    {
        if(strcmp(real->ID,sel->ID)==0)
        {
            printf("error!");
            return 1;
        }
        else
            if(strcmp(real->ID,sel->ID)<0)
            {
                p=real;
                real=real->next;
            }
            else
            {
                p->next=sel;
                sel->next=real;
                a=-1;
            }
        }
        if(a==1)
        {
        p->next=sel;
        sel->next=real;
        }
    p = head->next;
    for(i=0;i<=n;i++)
    {
    printf("%s %s",p->ID,p->name);

    for(j=0;j<3;j++)
    printf(" %d",p->grade[j]);
    printf("\n");

    p = p->next;
    }

    return 0;
}

