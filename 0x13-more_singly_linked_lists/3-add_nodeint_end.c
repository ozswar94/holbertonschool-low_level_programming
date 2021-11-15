#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - add a new element in the end of node
* @head: head node
* @n: integer
* Return: new node or NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
