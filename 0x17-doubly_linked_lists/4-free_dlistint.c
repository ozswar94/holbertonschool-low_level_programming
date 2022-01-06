#include <stdlib.h>
#include "lists.h"

/**
* free_dlistint - free list
* @head: head of list
* @n: n in list
*
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
