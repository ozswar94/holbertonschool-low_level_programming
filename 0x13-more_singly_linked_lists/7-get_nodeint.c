#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - get node element
* @head: head node
* @index: index of element
* Return: element;
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;
	while ((index--) != 0 && tmp != NULL)
		tmp = tmp->next;

	return (tmp);
}
