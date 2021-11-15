#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - insert element in node
* @head: head node
* @idx: index of node
* @n: value of node
* Return: new node or NULL if failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp1;
	listint_t *tmp2;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp1 = *head;
	tmp2 = (*head)->next;
	while ((--idx) && tmp1->next != NULL)
	{
		tmp1 = tmp1->next;
		if (tmp2 != NULL)
			tmp2 = tmp2->next;
	}

	if (idx != 0)
		return (NULL);

	tmp1->next = new;
	new->next = tmp2;

	return (new);
}
