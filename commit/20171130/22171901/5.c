#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int val;
    struct Node *next;
};
struct Node* construct (int arr[], int size);
struct Node* delete (struct Node* head, struct Node* target);
int main ()
{  
    int n;
    scanf ("%d", &n);
    int size;
    int arr[size] , i;
    printf ("输入数组：");
    for (i = 0; i < size; i++)
      scanf ("%d" , &arr[i]);

    struct Node *p = construct (arr, size);
    struct Node *target = (struct Node*)malloc(sizeof(struct Node));
    target -> val = n;
    target -> next = NULL;
    struct Node *head = delete (p, target);
    while (head != NULL)
    {
        printf ("%d ", head -> val);  
        head = head -> next;
    }
    printf ("\n");
    return 0;
}
struct Node* delete (struct Node* head, struct Node* target)
{
    struct Node* p, *p1;
    p = head;
    if (p -> val == target -> val)
    {     
        head = p -> next;
        free (p);
    }
    else
    {        
        p1 = p -> next;
        while (p1 -> val != target -> val)
        {    
            p = p -> next;
            p1 = p1 -> next;
        } 
        p -> next = p1 -> next;
        free (p1);
    }
    return head;
}
struct Node* construct (int arr[], int size)
{
    struct Node *head, *p; 
    int i;  
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> val = arr[0];      
    p = head;   
    for (i = 1; i < size; i++ )
    {
        p -> next = (struct Node*)malloc(sizeof(struct Node));
        p = p -> next;
        p -> val = arr[i];
        p -> next = NULL;      
    }     
     return head;
}
