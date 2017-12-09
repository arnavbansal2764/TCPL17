/*创建新节点并插入链表头部*/
#include <stdio.h>
#include <stdlib.h>
struct Node          //定义链表节点类型
{
  int val;
  struct Node* next;
};
struct Node *Create();
struct Node* insert(struct Node *head, int val1);
void Output(struct Node *head);

int main()
{
  int val1;
  struct Node *head = Create();
  printf("请输入新增元素值val1:");
  scanf("%d", &val1);
  head = insert(head, val1);
  Output(head);
  return 0;
}

struct Node *Create()     //创建链表
{
  struct Node *p1, *p2, *p3;
  p1 = (struct Node *)malloc(sizeof(struct Node)); p1 -> val = 60;
  p2 = (struct Node *)malloc(sizeof(struct Node)); p2 -> val = 61;
  p3 = (struct Node *)malloc(sizeof(struct Node)); p3 -> val = 62;
  p1 -> next = p2;
  p2 -> next = p3;
  p3 -> next = NULL;
  return p1;
}

void Output(struct Node *head)   //输出链表
{
  struct Node *p;
  p = head;
  while (p != NULL)
  {
    printf("%d\n", p -> val);
    p = p -> next;
  }
}

struct  Node *insert(struct Node *head, int val1)
{
  struct Node *newp;
  newp = (struct Node *)malloc(sizeof(struct Node));
  newp -> val = val1;
  newp -> next = head;        //在开头插入新节点
  head = newp;
  return head;
}
