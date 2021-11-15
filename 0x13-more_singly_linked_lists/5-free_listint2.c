#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - clean list
* @head: head node
* Return: new node or NULL if failed
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
