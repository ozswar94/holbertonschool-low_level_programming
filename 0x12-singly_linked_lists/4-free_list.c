#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - remove element on list
* @head: head of list
*/

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = tmp;
	}
}
