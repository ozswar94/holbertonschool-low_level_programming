#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - add a new element on node
* @head: head node
* @n: integer
* Return: new node or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
