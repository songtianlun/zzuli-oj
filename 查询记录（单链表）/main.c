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
void found(LinkList head,int n,char sel[]);

int main()
{
    LinkList head;
    LinkList p,real;
    int n,i,j;
    char sel[14];

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
    scanf("%s",sel);
    found(head,n,sel);

    return 0;
}

void found(LinkList head,int n,char sel[])
{
    LinkList pre = head->next;
    int i=0,j,answer;
    char comp[14];
    while(pre && i<n)
    {
        answer=1;
        strcpy(comp,pre->ID);
        if(strcmp(comp,sel)!=0)
        {
            pre = pre->next;
            i++;
            answer=-1;
            continue;
        }
            if(answer==1)
            {
            printf("%s %s",pre->ID,pre->name);
            for(j=0;j<3;j++)
            printf(" %d",pre->grade[j]);
            printf("\n");
            return;
            }
    }
    printf("Not Found");
    return;
}
