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
int found(LinkList head,int n,char sel[]);
void ListDelete(LinkList head,int i);
void PrintList(LinkList head);

int main()
{
    LinkList head;
    LinkList p,real;
    int n,i,j,answer;
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
    answer=found(head,n,sel)+1;
    if(answer==0)
        printf("error!");
    else
        ListDelete(head,answer);

    PrintList(head);
    return 0;
}

int found(LinkList head,int n,char sel[])
{
    LinkList pre = head->next;
    int i=0,answer;
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
            return i;
            }
    }
    return -1;
}
void ListDelete(LinkList head,int i)//删除单标表元素//
{
    LinkList p,pre = head;
    int j = 0;

    while(pre && j < i-1)
    {
        pre = pre->next;
        ++j;
    }

    p = pre->next;
    pre->next=p->next;

    free(p);
}
void PrintList(LinkList head)//输出单链表//
{
    LinkList p = head->next;
    int j;

    while(p)
    {
    printf("%s %s",p->ID,p->name);

    for(j=0;j<3;j++)
    printf(" %d",p->grade[j]);
    printf("\n");
    p = p->next;
    }
}
