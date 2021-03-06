#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};

struct Node *create()
{
    struct Node *p1,*p2,*p3;
    p1=(struct Node *)malloc(sizeof(struct Node)); p1->val=101;
    p2=(struct Node *)malloc(sizeof(struct Node)); p2->val=105;
    p3=(struct Node *)malloc(sizeof(struct Node)); p3->val=108;
    p1->next=p2;
    p2->next=p3;
    p3->next=NULL;
    return p1;
}

void output(struct Node *head)
{
    struct Node *p;
    p=head;
    while(p != NULL)
    {
        printf("%d\n",p->val);
        p=p->next;
    }
}
struct Node *insert(struct Node *head, int val)
{
    struct Node *newp = (struct Node *)malloc(sizeof (struct Node));
    newp->val = val;
    struct Node* p,*prev;
    prev=NULL;
    p=head;
    while(p != NULL)
    {
        if(p->val > newp->val) break;
        prev=p;
        p=p->next;
    }
    newp->next=p;
    if(p == head)
        head=newp;
    else 
        prev->next=newp;
    return head;
}
int main()
{
    int val;
    scanf("%d",&val);
    struct Node* head=create();
    head = insert(head,val);
    output(head);
    return 0;
}
