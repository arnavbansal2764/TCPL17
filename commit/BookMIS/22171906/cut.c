#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Book.h"
	
struct book* cut(struct book *p)
{
	struct book *shift1, *shift2;
	shift1 = NULL;
	shift2 = p;
	char arr[9];
	printf("Input the book you want to delete:\n");
	scanf("%s", arr);
	while(shift2 != NULL)
	{
		if (strcmp(arr, shift2->ISBN) == 0)
			break;
		shift1 = shift2;
		shift2 = shift2->next;
	}
		
	if (shift2 == NULL)
	{
		printf("NO!\n");
		return p;
	}
	if (shift2 == p)
		p = p->next;
	else 
		shift1->next = shift2->next;
		free(shift2);
		return p;
}

