#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - clean list
* @head: head node
* @index: index element
* Return: new node or NULL if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *remove;
	listint_t *tmp1;
	listint_t *tmp2;

	if (*head == NULL)
		return (-1);

	remove = *head;
	tmp2 = remove->next;
	if (index == 0)
	{
		*head = (*head)->next;
		free(remove);
		return (1);
	}
	while ((index) && remove != NULL)
	{
		tmp1 = remove;
		remove = remove->next;
		if (tmp2 != NULL)
			tmp2 = tmp2->next;
		index--;
	}
	if (index != 0)
		return (-1);

	tmp1->next = tmp2;
	free(remove);
	return (1);
}
