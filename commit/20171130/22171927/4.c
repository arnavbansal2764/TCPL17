#include <stdio.h>
#include <stdlib.h>
struct Node* insert(struct Node* head, int val);
struct Node
{
    int val;
    struct Node* next;
};
int main()
{
    struct Node *head, *p1, *p2;
    p1 = (struct Node *)malloc(sizeof(struct Node)); p1->val = 6;
    p2 = (struct Node *)malloc(sizeof(struct Node)); p2->val = 9;
    head = (struct Node *)malloc(sizeof(struct Node)); head->val= 3;
    head->next = p1;  p1->next = p2; p2->next = NULL;
    int val;
    printf("Please input val:");
    scanf("%d",&val);
	struct Node *k;
	k = insert(head, val);
	while (k != NULL)
	{
		printf("%d ",k -> val);
		k = k -> next;
	}
	return 0;
}
struct Node* insert(struct Node* head, int val)
{
	struct Node *newp;
	newp = (struct Node *)malloc(sizeof(struct Node));
	newp -> val = val;
	struct Node *prev, *p;
	prev = NULL; p = head;
	while (p != NULL)
	{
		if (p -> val > newp -> val)
			break;
		prev = p; p = p -> next;
	}
	newp -> next = p;
	if (p == head)
		head = newp;
	else
		prev -> next = newp;
	return head;
}
