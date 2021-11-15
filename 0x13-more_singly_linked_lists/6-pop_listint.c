#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - pop element
* @head: head node
* Return: value of element pop
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
